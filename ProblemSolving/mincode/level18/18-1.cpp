#include <iostream>
using namespace std;

int main()
{
    int MAP[3][4] = {
        {65000, 35, 42, 70},
        {70, 35, 65000, 1300},
        {65000, 30000, 38, 42}};

    int direct[70000] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            direct[MAP[i][j]]++;
        }
    }

    int maxID = 0;
    int maxcnt = 0;

    for (int i = 0; i < 70000; i++)
    {
        if (direct[i] == 0)
            continue;
        if (direct[i] > maxcnt)
        {
            maxID = i;
            maxcnt = direct[i];
        }
    }

    cout << maxID;
}