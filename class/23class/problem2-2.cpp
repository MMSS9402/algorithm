#include <iostream>
using namespace std;

char path[10];

int isCheck(int lev)
{
    for (int i = 0; i < lev; i++)
    {
        if (path[i] == '2')
            return 0;
    }
    return 1;
}

void run(int lev)
{
    if (lev > 0 && path[lev - 1] == '2')
        return;
    if (lev == 3)
    {
        int ret = isCheck(lev);
        if (ret == 0)
            return;
        cout << path << endl;
        return;
    }

    for (int i = 1; i <= 6; i++)
    {
        path[lev] = '0' + i;
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{

    return 0;
}