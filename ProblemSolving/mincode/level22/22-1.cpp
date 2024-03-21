#include <iostream>
using namespace std;

char name[3] = {'A', 'B', 'C'};
char path[3];

void run(int lev)
{
    if (lev == 2)
    {
        cout << path << endl;
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
    run(0);
    return 0;
}