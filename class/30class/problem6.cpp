#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
struct Node
{
    int n;
    int lev;
};
vector<vector<int>> v(5);
queue<Node> q;
int used[10];

int main()
{
    v[0] = {1, 4};
    v[1] = {3, 4};
    v[2] = {0};
    v[3] = {2};

    q.push({0, 0});
    used[0] = 1;

    // bfs;
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        // if (now.n == 3)
        // {
        //     cout << now.lev;
        //     break;
        // }

        for (int i = 0; i < v[now.n].size(); i++)
        {
            int next = v[now.n][i];

            if (used[next] == 1)
                continue;

            q.push({next, now.lev + 1});

            if (next == 3)
            {
                cout << now.lev + 1;
                return 0;
            }
        }
    }

    return 0;
}