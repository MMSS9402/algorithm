#include <iostream>
using namespace std;

int main()
{
    int arr[6];

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    int mask[6] = {1, 0, 1, 0, 1, 0};

    int min = arr[0];
    int minidx = 0;
    for (int i = 0; i < 6; i++)
    {
        if (mask[i] == 1)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                minidx = i;
            }
        }
    }

    cout << "arr[" << minidx << "]=" << min;

    return 0;
}