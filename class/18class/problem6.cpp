#include <iostream>
using namespace std;

int arr[4] = {5, 2, 5, 7};

int getCount(int n)
{
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int x;

    cin >> x;

    int ret = getCount(x);

    cout << ret;

    return 0;
}