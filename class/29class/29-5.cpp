#include <iostream>
#include <string>
#include <vector>
using namespace std;

int map[4][4] = {
    0, 7, 20, 8,
    0, 0, 5, 0,
    15, 0, 0, 0,
    0, 0, 6, 0};

int used[4];

void run(int now, int sum)
{
    if (now == 2)
    {
        cout << sum << " ";
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (map[now][i] == 0)
            continue;
        used[i] = 1;
        run(i, sum + map[now][i]);
        used[i] = 0;
    }
}

int main()
{

    used[0] = 1;

    run(0, 0);
    return 0;
}