#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n;

void run(int now, vector<vector<int>> m)
{
    cout << now << " ";

    for (int i = 0; i < m[now].size(); i++)
    {
        if (m[now][i] == 0)
            continue;
        int next = i;
        run(next, m);
    }
}

int main()
{
    cin >> n;
    vector<vector<int>> m(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k;
            cin >> k;
            m[i].push_back(k);
        }
    }
    run(0, m);

    return 0;
}