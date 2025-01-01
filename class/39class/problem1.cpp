#include <iostream>
using namespace std;
int arr[4] = {10, 50, 100, 500};

int main()
{

    int tgt = 1750;

    int k = 3;
    int count = 0;
    while (tgt > 0)
    {
        if (tgt - arr[k] < 0)
        {
            k--;
        }
        tgt -= arr[k];
        count++;
    }
    cout << count;

    return 0;
}