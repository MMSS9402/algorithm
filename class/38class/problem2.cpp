#include <iostream>
#include <queue>
using namespace std;

int map[4][7] = {
    0,
    1,
    1,
    1,
    1,
    0,
    1,
    0,
    0,
    0,
    2,
    1,
    0,
    1,
    2,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    1,
    0,
    2,
    2,
    0,
};

int used[4][7];

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
        for (int j = 0; j < 7; j++)
        {
            if (map[i][j] != 2)
                continue;
            q.push({i, j});
            used[i][j] = 1;
        }
    }
}

int bfs()
{
    int lastLev = 0;
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();
        for (int t = 0; t < 4; t++)
        {
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if (dx < 0 || dy < 0 || dx >= 4 || dy >= 7)
                continue;
            if (map[dx][dy] == 1)
                continue;
            if (used[dx][dy] == 1)
                continue;
            used[dx][dy] = 1;
            q.push({dx, dy, now.lev + 1});
            lastLev = now.lev + 1;
        }
    }
    return lastLev;
}

int main()
{

    init();

    cout << bfs();

    return 0;
}