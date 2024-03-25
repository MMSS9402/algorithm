#include <iostream>
using namespace std;
char name[6] = {"EWABC"};
char path[10];
int used[10];
char a;

void run(int lev)
{
    if (lev > 0 && path[lev - 1] == a)
        return;
    if (lev == 4)
    {
        cout << path << endl;
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
    cin >> a;
    run(0);
    return 0;
}