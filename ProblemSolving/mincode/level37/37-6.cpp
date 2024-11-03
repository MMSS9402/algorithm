#include <iostream>
#include <queue>
using namespace std;

int direct[4][2] = {
    0, 1,
    0, -1,
    1, 0,
    -1, 0};

int map[4][6] = {0};
int used[4][6] = {0};
struct Node
{
    int x, y;
};

queue<Node> q;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> map[i][j];
        }
    }

    q.push({0, 0});
    int cnt = 0;
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
            if (map[dx][dy] == 2)
                cnt++;
            used[dx][dy] = 1;
            map[dx][dy] = map[now.x][now.y] + 1;
            q.push({dx, dy});
        }
    }
    cout << cnt;

    return 0;
}