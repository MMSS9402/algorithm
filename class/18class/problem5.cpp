#include <iostream>

using namespace std;

int arr1[5] = {5, 4, 2, 5, 6};
int arr2[6] = {5, 7, 5, 4, 2, 9};

int isExist(int n)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] == n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char arr3[6];

    for (int i = 0; i < 6; i++)
    {
        if (isExist(arr2[i]))
        {
            cout << "O";
        }
        else
        {
            cout << "X";
        }
    }

    return 0;
}