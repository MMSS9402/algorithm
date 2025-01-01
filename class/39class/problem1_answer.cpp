#include <iostream>
using namespace std;
int arr[4] = {500, 100, 50, 10};

int main()
{
    int price = 1750;
    int result = 0;
    for (int d = 0; d < 4; d++)
    {
        result += (price / arr[d]);
        price = 1750 % arr[d];
    }
    cout << result;

    return 0;
}