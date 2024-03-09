#include <iostream>
using namespace std;

int map[5][4];

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> map[i][j];
        }
    }
    int direct[8][2] = {
        0, 1,
        0, -1,
        1, 0,
        -1, 0,
        1, 1,
        1, -1,
        -1, 1,
        -1, -1};
    int flag = 1;
    for (int t = 0; t < 8; t++)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (map[i][j] == 1)
                {
                    int dx = i + direct[t][0];
                    int dy = j + direct[t][1];
                    if (dx >= 0 && dx < 5 && dy >= 0 && dy < 4)
                    {
                        if (map[dx][dy] == 1)
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
            }
        }
    }
    if (flag)
        cout << "안정된 상태";
    else
        cout << "불안정한 상태";

    return 0;
}