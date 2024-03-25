#include <iostream>
using namespace std;

char name[10];
char path[4];
int used[200];
int cnt;

void run(int lev)
{
    if (lev >= 2 && ((path[lev - 1] == 'B' && path[lev - 2] == 'T') || (path[lev - 1] == 'T' && path[lev - 2] == 'B')))
        return;
    if (lev == 4)
    {
        cnt++;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        // if (used[i] == 1)
        //     continue;
        // used[i] = 1;
        path[lev] = name[i];
        run(lev + 1);
        path[lev] = 0;
        // used[i] = 0;
    }
}

int main()
{
    cin >> name;
    run(0);
    cout << cnt;
    return 0;
}