#include <iostream>
using namespace std;

int map[4][4];

int main()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> map[i][j];
        }
    }

    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for (int i = 0; i < 4; i++)
    {
        sum1 += map[0][i];
        sum2 += map[1][i];
        sum3 += map[2][i];
    }

    map[0][3] = sum1;
    map[1][3] = sum2;
    map[2][3] = sum3;

    sum1 = 0;
    sum2 = 0;
    sum3 = 0;

    for (int i = 0; i < 3; i++)
    {
        sum1 += map[i][0];
        sum2 += map[i][1];
        sum3 += map[i][2];
    }
    map[3][0] = sum1;
    map[3][1] = sum2;
    map[3][2] = sum3;

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += map[i][i];
    }
    map[3][3] = sum;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}