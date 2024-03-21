#include <iostream>
using namespace std;

int arr[4][3] = {
    1,
    3,
    -5,
    -8,
    3,
    4,
    -2,
    -5,
    -9,
    5,
    5,
    4,
};
int path[4];
int m = -99999;

void run(int lev, int gop)
{
    if (lev == 4)
    {
        cout << gop << " ";
        if (gop > m)
        {
            m = gop;
        }
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        path[lev] = arr[lev][i];
        run(lev + 1, gop * arr[lev][i]);
        path[lev] = 0;
    }
}

int main()
{
    run(0, 1);
    cout << "max:" << m;
    return 0;
}