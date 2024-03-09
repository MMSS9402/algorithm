#include <iostream>
using namespace std;

int map[4] = {3, 5, 4, 2};

int main()
{

    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == 1)
        {
            sum += map[i];
        }
    }

    cout << sum << endl;

    return 0;
}