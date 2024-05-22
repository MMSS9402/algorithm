#include <iostream>
#include <string>
#include <vector>
using namespace std;

int map[4][5];

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> map[i][j];
        }
    }
    int flag = 1;
    int initx = 0;
    int inity = 0;
    int x = 0;
    int y = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (flag && map[i][j] == 1)
            {
                initx = i;
                inity = j;
                flag = 0;
            }
            if (flag == 0 && map[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    cout << "(" << initx << "," << inity << ")" << endl;
    cout << "(" << x << "," << y << ")" << endl;

    return 0;
}