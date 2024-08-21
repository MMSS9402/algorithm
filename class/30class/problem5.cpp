#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int used[5];
vector<vector<int>> v(5);
queue<int> q;

void bfs(int start)
{
    queue<int> q;
    int used[10] = {0};
    q.push(start);
    used[start] = 1;

    while (!q.empty())
    {
        int now = q.front();
        cout << char(now + 'A');
        q.pop();
        for (int i = 0; i < v[now].size(); i++)
        {
            int next = v[now][i];
            if (used[next] == 1)
                continue;
            used[next] = 1;
            q.push(next);
        }
    }
    cout << endl;
}

int main()
{

    v[0] = {1, 2};
    v[1] = {0, 2};
    v[2] = {0, 1, 3};
    v[3] = {2, 4};
    v[4] = {3};

    bfs(0);
    bfs(3);

    return 0;
}