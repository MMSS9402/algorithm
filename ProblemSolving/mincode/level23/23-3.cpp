#include <iostream>
using namespace std;

char name[4] = "ABC";
int n;
int cnt;
char path[100];

void run(int lev)
{
    if (lev >= 3 && path[lev - 3] == path[lev - 2] && path[lev - 3] == path[lev - 1])
        return;
    if (lev == n)
    {
        cnt++;
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        path[lev] = name[i];
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    cin >> n;
    run(0);
    cout << cnt;
    return 0;
}