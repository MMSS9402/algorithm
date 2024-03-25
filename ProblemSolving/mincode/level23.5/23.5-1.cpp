#include <iostream>
using namespace std;

char name[5];

int arr[] = {3, 5, 1, 9, 7};

void move_R()
{
    int temp = arr[4];
    for (int i = 5; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    return;
}
void move_L()
{
    int temp = arr[0];
    for (int i = 0; i < 4; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[4] = temp;
    return;
}

int main()
{

    for (int i = 0; i < 4; i++)
    {
        cin >> name[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (name[i] == 'R')
        {
            move_R();
        }
        if (name[i] == 'L')
        {
            move_L();
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}