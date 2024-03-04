#include <iostream>
using namespace std;

int main()
{

    int arr[2][4];

    int dat[31] = {0};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    int n;
    cin >> n;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            dat[arr[i][j]]++;
        }
    }

    cout << n << ":" << dat[n];

    return 0;
}