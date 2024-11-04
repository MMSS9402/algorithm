#include <iostream>
#include <queue>
using namespace std;

int map[4][6] = {
    0,
    0,
    1,
    0,
    0,
    2,
    1,
    1,
    1,
    0,
    0,
    2,
    1,
    1,
    0,
    0,
    0,
    2,
    1,
    1,
    0,
    2,
    2,
    2,
};
int used[4][6];
int direct[4][2] = {
    1, 0,
    0, 1,
    -1, 0,
    0, -1};
struct Node
{
    int x, y;
    int lev;
};
queue<Node> q;

void init()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (map[i][j] != 1)
                continue;
            q.push({i, j});
            used[i][j] = 1;
        }
    }
}

int bfs()
{
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();
        for (int t = 0; t < 4; t++)
        {
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if (dx < 0 || dy < 0 || dx >= 4 || dy >= 6)
                continue;
            if (map[dx][dy] == 1)
                continue;
            if (used[dx][dy] == 1)
                continue;
            used[dx][dy] = 1;
            q.push({dx, dy, now.lev + 1});

            if (map[dx][dy] == 2)
                return now.lev + 1;
        }
    }
    return -1;
}

int main()
{

    init();

    cout << bfs() - 1;

    return 0;
}