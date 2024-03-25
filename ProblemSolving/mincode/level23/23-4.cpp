#include <iostream>
using namespace std;
char name[] = "BTSKR";
int n;
int used[100];
int cnt;
char path[10];

int isCheck(char path[10])
{
    for (int i = 0; i < n; i++)
    {
        if (path[i] == 'S')
            return 1;
    }
    return 0;
}

void run(int lev)
{
    if (lev == n)
    {
        if (isCheck(path))
            cnt++;
        return;
    }
    for (int i = 0; i < 5; i++)
    {
        if (used[i] == 1)
            continue;
        used[i] = 1;
        path[lev] = name[i];
        run(lev + 1);
        path[lev] = 0;
        used[i] = 0;
    }
}

int main()
{
    cin >> n;
    run(0);
    cout << cnt;
    return 0;
}