#include <iostream>
using namespace std;

int arr1[8] = {5, 6, 1, 1, 1, 1, 5, 4};

int arr2[2][4] = {
    {5, 5, 2, 6},
    {9, 1, 1, 3}};

int getCount(int n)
{
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr1[i] == n)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << getCount(arr2[i][j]);
        }
        cout << endl;
    }

    return 0;
}