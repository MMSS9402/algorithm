#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    int map[5][4];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 4; j++)
        {
            if (map[i][j] == 1)
                cnt++;
            if (cnt == 4)
            {
                for (int t = 0; t < 4; t++)
                {
                    map[i][t] = 0;
                    // int temp = map[i][t];
                    map[i][t] = map[i - 1][t];
                    map[i - 1][t] = 0;
                }
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}