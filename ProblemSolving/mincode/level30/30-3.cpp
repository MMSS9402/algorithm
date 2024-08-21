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
    v[0] = {1, 4};
    v[1] = {2, 5};
    v[2] = {3};

    int k;
    cin >> k;

    q.push(k);

    while (!q.empty())
    {
        int now = q.front();
        cout << now << " ";
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