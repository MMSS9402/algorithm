#include <iostream>
using namespace std;

int main()
{
    char arr[4][3];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int AX = 0;
    int AY = 0;
    int BX = 0;
    int BY = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 'A')
            {
                AX = i;
                AY = j;
            }
            if (arr[i][j] == 'B')
            {
                BX = i;
                BY = j;
            }
        }
    }
    int sumx = BX - AX;
    int sumy = BY - AY;
    if (sumx < 0)
    {
        sumx = -sumx;
    }
    if (sumy < 0)
    {
        sumy = -sumy;
    }
    int sum = sumx + sumy;
    cout << sum;
}