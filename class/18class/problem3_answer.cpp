#include <iostream>
using namespace std;

int arr1[6] = {4, 2, 5, 3, 7, 6};
int arr2[3] = {5, 3, 7};

int isSame(int n)
{
    for (int i = 0; i < 3; i++)
    {
        if (arr1[n + i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 3;

    int ret = isSame(n);
    if (ret)
        cout << "O";
    else
        cout << "X";
    return 0;
}