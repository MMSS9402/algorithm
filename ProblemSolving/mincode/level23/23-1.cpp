#include <iostream>
using namespace std;

char name[10];
char path[4];
int used[200];

void run(int lev)
{
    if (lev == 3)
    {
        cout << path << endl;
        return;
    }
    for (int i = 0; i < 4; i++)
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
    cin >> name;
    run(0);
    return 0;
}