#include <iostream>
using namespace std;

int arr[4][2][2] = {
    {2, 4,
     1, 5},
    {2, 3,
     3, 6},
    {7, 3,
     1, 5}};

int main()
{
    int max = 0;
    int min = 999;

    int n;
    cin >> n;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[n][i][j] > max)
            {
                max = arr[n][i][j];
            }
            if (arr[n][i][j] < min)
            {
                min = arr[n][i][j];
            }
        }
    }

    cout << "MAX=" << max << endl;
    cout << "MIN=" << min << endl;

    return 0;
}