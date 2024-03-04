#include <iostream>
using namespace std;

int main()
{

    char arr[10];
    cin >> arr;

    int dat[200] = {0};

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == '\0')
            break;
        dat[arr[i]]++;
    }

    int max = 0;
    int idx;
    for (int i = 0; i < 200; i++)
    {
        if (dat[i] == 0)
            continue;

        if (dat[i] > max)
        {
            max = dat[i];
            idx = i;
        }
    }

    cout << char(idx) << ":" << max;

    return 0;
}