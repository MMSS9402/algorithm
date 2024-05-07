#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> alist(6);
char path[10];
void run(int lev, int now)
{
    cout << char(now + 'A');
    for (int i = 0; i < alist[now].size(); i++)
    {
        int next = alist[now][i];
        path[lev + 1] = 'A' + next;
        run(lev + 1, next);
        path[lev + 1] = 0;
    }
}

int main()
{

    alist[0] = {1, 2};
    alist[1] = {3};
    alist[2] = {4, 5};
    path[0] = 'A';
    run(0, 0);

    return 0;
}