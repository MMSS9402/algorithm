#include <iostream>
using namespace std;

int map[3][3] = {
    3, 1, 9,
    7, 2, 1,
    1, 0, 8};

int main()
{
    int flag = 0;
    int mask[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mask[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mask[i][j] == 1)
            {
                if (map[i][j] >= 3 && map[i][j] <= 5)
                {
                    flag = 1;
                }
            }
        }
    }

    if (flag)
        cout << "발견" << endl;
    else
        cout << "미발견" << endl;

    return 0;
}