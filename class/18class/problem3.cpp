#include <iostream>
using namespace std;

int main()
{

    int arr1[6] = {4, 2, 5, 3, 7, 6};
    int arr2[3] = {5, 3, 7};

    int n;
    cin >> n;
    int flag = 1;
    int k = 0;
    for (int i = n; i < n + 3; i++)
    {
        if (arr1[i] != arr2[k])
        {
            flag = 0;
            break;
        }
        k++;
    }

    if (flag)
    {
        cout << "O";
    }
    else
    {
        cout << "X";
    }

    return 0;
}