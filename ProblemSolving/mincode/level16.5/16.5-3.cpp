#include <iostream>
using namespace std;

int arr[2][3];

void getMax(int *dx, int *dy)
{
    int x, y;
    int max = arr[0][0];
    *dx = 0;
    *dy = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                *dx = i;
                *dy = j;
            }
        }
    }
}

void getMin(int *dx, int *dy)
{
    int x, y;
    int min = arr[0][0];
    *dx = 0;
    *dy = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                *dx = i;
                *dy = j;
            }
        }
    }
}

int main()
{

    int maxdx, maxdy;
    int mindx, mindy;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    getMax(&maxdx, &maxdy);
    getMin(&mindx, &mindy);

    cout << "(" << maxdx << "," << maxdy << ")" << endl;
    cout << "(" << mindx << "," << mindy << ")" << endl;
    return 0;
}