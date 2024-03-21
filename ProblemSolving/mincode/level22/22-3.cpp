#include <iostream>
using namespace std;

char name[4] = {'B', 'G', 'T', 'K'};
char path[10];
int level;

void run(int lev)
{
    if (lev == level)
    {
        cout << path << endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        path[lev] = name[i];
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    cin >> level;
    run(0);
    return 0;
}