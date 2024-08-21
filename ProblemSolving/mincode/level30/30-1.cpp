#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;
int map[6][6] = {
    0, 0, 1, 1, 0, 1,
    0, 0, 0, 1, 1, 1,
    0, 0, 0, 0, 1, 1,
    0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0};
int used[6];

void run(int now)
{
    cout << now << " ";
    for (int i = 0; i < 6; i++)
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
    int n;
    cin >> n;
    used[n] = 1;
    run(n);

    return 0;
}