#include <iostream>
using namespace std;

char map[3][5] = {
    "ABGK",
    "TTAB",
    "ACCD"};

char pattern[2][2];

int isPattern(int x, int y)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (map[i + x][j + y] != pattern[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    for (int i = 0; i < 2; i++)
    {
        cin >> pattern[i];
    }

    int cnt = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (isPattern(i, j))
                cnt++;
        }
    }

    if (cnt >= 1)
        cout << "발견(" << cnt << "개)";
    else
        cout << "미발견";

    return 0;
}