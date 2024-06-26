#include <iostream>
#include <string>
#include <vector>
using namespace std;

string name = "KGZHIR";

vector<vector<int>> alist(3);

void run(int now)
{
    cout << name[now];
    for (int i = 0; i < alist[now].size(); i++)
    {
        // cout << name[alist[now][i]];
        int next = alist[now][i];
        run(next);
    }
}

int main()
{
    alist[0] = {1, 2};
    alist[1] = {3, 4};
    alist[2] = {5};

    run(0);
    return 0;
}