#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int map[4][8];

int Check(int ax, int ay, int bx, int by)
{
    int sum = 0;
    for (int i = ax; i <= bx; i++)
    {
        for (int j = ay; j <= by; j++)
        {
            if (map[i][j] == 0)
                return -1;

            sum += map[i][j];
        }
    }
    return sum;
}

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> map[i][j];
        }
    }
    int max = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (map[i][j] > 0)
            {
                for (int a = i; a < 4; a++)
                {
                    for (int b = j; b < 8; b++)
                    {
                        if (map[a][b] > 0)
                        {
                            int ret = Check(i, j, a, b);
                            if (ret != -1)
                            {
                                if (ret > max)
                                    max = ret;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << max;
    return 0;
}
