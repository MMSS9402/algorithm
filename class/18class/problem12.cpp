#include <iostream>
using namespace std;

int arr1[3][4] = {
    4, 5, 7, 6,
    1, 5, 5, 4,
    1, 1, 1, 1};

int arr2[2][3] = {
    5, 6, 4,
    1, 5, 3};

int main()
{

    int dat[10] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            dat[arr1[i][j]]++;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << dat[arr2[i][j]] << " ";
        }
        cout << endl;
    }

    return 0;
}