#include <iostream>
using namespace std;

// void mySwapPtr(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

void mySwapRef(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{

    int a = 3;
    int b = 2;

    cout << a << " " << b << " " << endl;

    mySwapRef(a, b);

    cout << a << " " << b << " " << endl;

    int arr[] = {3, 2};

    cout << arr[0] << " " << arr[1] << endl;

    if (arr[0] > arr[1])
    {
        mySwapRef(arr[0], arr[1]);
    }

    cout << arr[0] << " " << arr[1] << endl;

    return 0;
}