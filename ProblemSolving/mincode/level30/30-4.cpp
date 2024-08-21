#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> v(6);
queue<int> q;
int used[6];
int main()
{
    v[0] = {4};
    v[1] = {0, 2, 5};
    v[2] = {0, 3};
    v[3] = {0, 1};
    v[4] = {1, 3, 5};
    v[5] = {2, 3};

    int k;
    cin >> k;

    q.push(k);
    used[k] = 1;

    while (!q.empty())
    {
        int now = q.front();
        cout << now << endl;
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

    return 0;
}