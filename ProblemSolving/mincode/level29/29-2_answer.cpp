#include <iostream>
using namespace std;

int map[6][6] = {
    0,
    0,
    1,
    0,
    1,
    1,
    1,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

int a, b;
int used[10];
int mini = 21e8;

void dfs(int level, int now)
{
    if (now == b)
    {
        if (mini > level)
            mini = level;
        return;
    }

    for (int i = 0; i < 6; i++)
    {
        if (map[now][i] == 0)
            continue;
        if (used[i] == 1)
            continue;
        used[i] = 1;
        dfs(level + 1, i);
        used[i] = 0;
    }
}

int main()
{
    cin >> a >> b;
    a--;
    b--;

    used[a] = 1;
    dfs(0, a);

    if (mini == 21e8)
        mini = 0;
    cout << mini;

    return 0;
}