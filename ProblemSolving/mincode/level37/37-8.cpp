#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int direct[4][2] = {
    0, 1,
    0, -1,
    1, 0,
    -1, 0};
int map[100][100] = {0};
int used[100][100] = {0};
int n, m;
struct Node
{
    int x, y;
};
queue<Node> q;

void bfs(int startX, int startY)
{
    q.push({startX, startY});
    used[startX][startY] = 1;
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();
        for (int t = 0; t < 4; t++)
        {
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if (dx < 0 || dy < 0 || dx >= n || dy >= m)
                continue;
            if (map[dx][dy] == 0)
                continue;
            if (used[dx][dy] == 1)
                continue;
            used[dx][dy] = 1;
            q.push({dx, dy});
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (map[i][j] == 0)
                continue;
            if (used[i][j] == 1)
                continue;
            used[i][j] = 1;
            bfs(i, j);
            // cout << i << " " << j << endl;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}