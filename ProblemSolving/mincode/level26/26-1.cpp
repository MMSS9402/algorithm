#include <iostream>
using namespace std;

struct Node
{
    int *p;
};

int main()
{

    Node arr[5];

    int arri[5];

    arr[0].p = &arri[0];
    arr[1].p = &arri[1];
    arr[2].p = &arri[2];
    arr[3].p = &arri[3];
    arr[4].p = &arri[4];

    for (int i = 0; i < 5; i++)
    {
        cin >> arri[i];
    }
    int max = 0;
    int min = 100;

    for (int i = 0; i < 5; i++)
    {
        if (arri[i] > max)
        {
            max = arri[i];
        }
        if (arri[i] < min)
        {
            min = arri[i];
        }
    }

    cout << "MAX:" << max << endl;
    cout << "MIN:" << min << endl;

    return 0;
}