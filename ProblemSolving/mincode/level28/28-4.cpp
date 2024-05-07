#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;

void run(int now, vector<vector<int>> alist)
{
    cout << now << " ";
    for (int i = 0; i < alist[now].size(); i++)
    {
        int next = alist[now][i];
        run(next, alist);
    }
}

int main()
{
    cin >> n;
    vector<vector<int>> alist(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (x == 0)
                continue;
            alist[i].push_back(j);
        }
    }

    run(0, alist);

    return 0;
}