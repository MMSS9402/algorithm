#include <iostream>
using namespace std;

char arr[3][3][3];

int main()
{

    char a;
    cin >> a;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                arr[i][j][k] = a;
            }
        }
        a = int(a) + 1;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << arr[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}