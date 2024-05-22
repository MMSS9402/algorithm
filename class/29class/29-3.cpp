#include <iostream>
#include <vector>
#include <string>
using namespace std;

int map[4][4];
int used[4];

void run(int now)
{
    cout << now;
    for (int i = 0; i < 4; i++)
    {
        if (map[now][i] == 0)
            continue;
        if (used[i] == 1)
            continue;
        used[i] = 1;
        run(i);
    }
}

int main()
{
    map[0][1] = 1;
    map[0][3] = 1;
    map[1][2] = 1;
    map[2][3] = 1;
    map[3][2] = 1;
    map[2][0] = 1;

    used[0] = 1;
    run(0);

    return 0;
}