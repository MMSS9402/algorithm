#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int direct[4][2] = {
    0, 1,
    0, -1,
    1, 0,
    -1, 0};
char map[20][20] = {0};
int used[20][20];
int n, m;
struct Node
{
    int x, y;
};
queue<Node> q;

int bfs(int startX, int startY, int endX, int endY)
{
    while (!q.empty())
        q.pop();
    memset(used, 0, 20 * 20 * sizeof(int));
    q.push({startX, startY});
    int cnt = 0;
    used[startX][startY] = 0;
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
            if (map[dx][dy] == 'x')
                continue;
            if (used[dx][dy] != 0)
                continue;
            used[dx][dy] = used[now.x][now.y] + 1;
            // cout << dx << dy << " " << used[dx][dy] << endl;
            q.push({dx, dy});
            cnt++;
            if (dx == endX && dy == endY)
            {
                // cout << "XXXX";
                return used[dx][dy];
            }
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
    int startX, startY, midX, midY, endX, endY;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (map[i][j] == 'S')
            {
                startX = i;
                startY = j;
            }
            if (map[i][j] == 'C')
            {
                midX = i;
                midY = j;
            }
            if (map[i][j] == 'D')
            {
                endX = i;
                endY = j;
            }
        }
    }

    int sum = 0;
    // cout << startX << startY << midX << midY << endX << endY;
    sum += bfs(startX, startY, midX, midY);
    // cout << midX << midY << endl;
    sum += bfs(midX, midY, endX, endY);

    cout << sum;

    return 0;
}