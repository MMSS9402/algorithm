#include <iostream>
#include <string>
#include <vector>
using namespace std;

int map[8][8] = {
    0, 1, 1, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 0, 1, 0,
    0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0};

int main()
{
    int lev = -1;
    int x;
    char a;
    cin >> a;
    x = int(a - 'A');

    for (int i = 0; i < 8; i++)
    {
        if (map[i][x] == 1)
            lev = i;
    }

    for (int i = 0; i < 8; i++)
    {
        if (lev < 0)
        {
            cout << "없음";
            break;
        }
        if (i == x)
            continue;
        if (map[lev][i] == 1)
        {
            cout << char('A' + i) << " ";
        }
    }

    return 0;
}