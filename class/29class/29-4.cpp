#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> alist(3);

int used[3];

int cnt;
void run(int now)
{
    if (now == 2)
    {
        cnt++;
        return;
    }
    for (int i = 0; i < alist[now].size(); i++)
    {
        int next = alist[now][i];
        if (used[next] == 1)
            continue;
        used[next] = 1;
        run(next);
        used[next] = 0;
    }
}

int main()
{

    alist[0] = {1, 2};
    alist[1] = {2};
    alist[2] = {0};

    used[0] = 1;
    run(0);

    cout << cnt << "개";

    return 0;
}