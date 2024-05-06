#include <iostream>
#include <string>
#include <vector>
using namespace std;

char map[4][4] = {
    '_',
    '_',
    '_',
    '_',
    '_',
    '_',
    '_',
    '_',
    '_',
    '_',
    '_',
    '_',
    '_',
    '_',
    '_',
    '_',
};
int direct[8][2] = {
    0, 1,
    1, 0,
    -1, 0,
    0, -1,
    1, 1,
    1, -1,
    -1, 1,
    -1, -1};

int main()
{

    int x, y;
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        cin >> y;
        map[x][y] = '#';
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (map[i][j] == '#')
            {
                for (int t = 0; t < 8; t++)
                {
                    int dx = i + direct[t][0];
                    int dy = j + direct[t][1];
                    if (dx >= 0 && dy >= 0 && dx < 4 && dy < 4)
                    {
                        map[dx][dy] = '@';
                    }
                }
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }

    return 0;
}