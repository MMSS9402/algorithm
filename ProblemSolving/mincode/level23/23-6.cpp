#include <iostream>
using namespace std;
char name[10];
char path[10];
int cnt;

void run(int lev)
{
    if (lev >= 2 && ((path[lev - 1] - path[lev - 2]) > 3 || (path[lev - 2] - path[lev - 1]) > 3))
        return;
    if (lev == 4)
    {
        cnt++;
        // cout << path << endl;
        return;
    }

    for (int i = 0; i < 5; i++)
    {
        path[lev] = name[i];
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{

    cin >> name;
    run(0);
    cout << cnt;
    return 0;
}