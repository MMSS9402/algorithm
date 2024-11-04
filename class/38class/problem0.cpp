#include <iostream>
#include <queue>
using namespace std;

int map[4][6] = {
    0, 0, 0, 0, 0, 2,
    0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2,
    0, 0, 2, 2, 2, 2};
int used[4][6];
struct Node
{
    int x, y;
    int lev;
};

int direct[4][2] = {
    0,
    1,
    0,
    -1,
    1,
    0,
    -1,
    0,
};
queue<Node> q;

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
            if (used[dx][dy] == 1)
                continue;
            if (map[dx][dy] == 1)
                continue;
            used[dx][dy] = 1;
            q.push({dx, dy, now.lev + 1});
            if (map[dx][dy] == 2)
            {
                return now.lev + 1;
            }
        }
    }
}

int main()
{

    q.push({1, 1});
    used[1][1] = 1;
    cout << bfs();

    return 0;
}