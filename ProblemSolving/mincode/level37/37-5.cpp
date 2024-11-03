#include <iostream>
#include <queue>
using namespace std;

int direct[4][2] = {
    0, 1,
    0, -1,
    1, 0,
    -1, 0};

int map[4][4] = {
    0, 0, 0, 0,
    1, 1, 0, 1,
    0, 0, 0, 0,
    1, 0, 1, 0};
struct Node
{
    int x, y;
};

queue<Node> q;

int main()
{
    int x1, y1;
    cin >> x1 >> y1;
    int x2, y2;
    cin >> x2 >> y2;

    q.push({x1, y1});

    int max = 0;
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();
        for (int t = 0; t < 4; t++)
        {
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if (dx < 0 || dy < 0 || dx >= 4 || dy >= 4)
                continue;
            if (map[dx][dy] != 0)
                continue;
            map[dx][dy] = map[now.x][now.y] + 1;
            if (dx == x2 && dy == y2)
            {
                cout << map[dx][dy] << "회";
            }
            q.push({dx, dy});
        }
    }

    return 0;
}