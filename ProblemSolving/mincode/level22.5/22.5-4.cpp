#include <iostream>
using namespace std;

int arr[3][2][3];

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][0][j] = a;
            arr[i][1][j] = b;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}