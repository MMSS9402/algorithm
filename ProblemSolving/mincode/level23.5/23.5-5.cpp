#include <iostream>
using namespace std;

int arr[8]; //= {4, 1, 7, 9, 6, 3, 3, 6};
int a = 0;
int a_idx = 0;
int b = 0;
int b_idx = 0;
int flag = 1;

void Swap(int a, int b)
{
    for (int i = 1; i < 8; i++)
    {
        if (arr[i] > arr[0])
        {
            a = arr[i];
            a_idx = i;
            break;
        }
    }
    for (int i = 7; i > 0; i--)
    {
        if (arr[i] < arr[0])
        {
            b = arr[i];
            b_idx = i;
            break;
        }
    }
    if (a_idx >= b_idx)
    {
        int temp1 = arr[b_idx];
        arr[b_idx] = arr[0];
        arr[0] = temp1;
        flag = 0;
        return;
    }
    int temp = arr[a_idx];
    arr[a_idx] = arr[b_idx];
    arr[b_idx] = temp;

    // for (int i = 0; i < 8; i++)
    // {
    //     cout << arr[i];
    // }
    // cout << endl;
}

int main()
{

    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < 9; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    for (int i = 1; i < 8; i++)
    {
        if (arr[i] > arr[0])
        {
            a = arr[i];
            a_idx = i;
            break;
        }
    }
    for (int i = 7; i > 0; i--)
    {
        if (arr[i] < arr[0])
        {
            b = arr[i];
            b_idx = i;
            break;
        }
    }

    while (flag)
    {
        Swap(a, b);
    }

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}