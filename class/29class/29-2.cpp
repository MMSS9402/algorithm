

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int used[4];

string name = "KGZHIR";

vector<vector<int>> alist(4);

void run(int now)
{
    cout << now;
    for (int i = 0; i < alist[now].size(); i++)
    {
        int next = alist[now][i];
        if (used[next] == 1)
            continue;
        used[next] = 1;
        run(next);
    }
}

int main()
{
    alist[0] = {1, 3};
    alist[1] = {2};
    alist[2] = {0, 3};
    alist[3] = {2};
    used[0] = 1;
    run(0);

    return 0;
}