#include <iostream>
#include <string>
#include <vector>
using namespace std;

int map[4][4];
int direct[4][2] = {
    0, 1,
    1, 0,
    -1, 0,
    0, -1};

int valid(int x, int y)
{
    for (int t = 0; t < 4; t++)
    {
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if (dx > 0 && dy > 0 && dx < 4 && dy < 4)
        {
            if (map[dx][dy] == 1)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> map[i][j];
        }
    }
    int ret = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (map[i][j] == 1)
            {
                ret = valid(i, j);
                if (ret == 0)
                {
                    break;
                }
            }
            if (ret == 0)
            {
                break;
            }
        }
    }
    // cout << valid(1, 1) << endl;
    // cout << ret << endl;

    if (ret)
        cout << "안전한 상태";
    else
        cout << "위험한 상태";

    return 0;
}