#include <iostream>
#include <string>
#include <vector>
using namespace std;
int arr1[4];
int arr2[4];
int arr[8];

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cin >> arr2[i];
    }

    int a = 0;
    int b = 0;

    for (int i = 0; i < 8; i++)
    {
        if (a > 3 && b > 3)
            break;
        if (a > 3 && b <= 3)
        {
            arr[i] = arr2[b];
            b++;
            continue;
        }
        if (a <= 3 && b > 3)
        {
            arr[i] = arr1[a];
            a++;
            continue;
        }

        if (arr1[a] >= arr2[b])
        {
            arr[i] = arr2[b];
            b++;
            continue;
        }
        if (arr1[a] <= arr2[b])
        {
            arr[i] = arr1[a];
            a++;
            continue;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}