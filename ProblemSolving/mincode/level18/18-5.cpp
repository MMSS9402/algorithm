#include <iostream>
using namespace std;

int main()
{
    char arr[9];

    cin >> arr;

    int direct[200] = {0};

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == '\0')
            break;
        direct[arr[i]]++;
    }

    int max = 0;
    int maxidx = 0;

    for (int i = 0; i < 200; i++)
    {
        if (direct[i] == 0 && direct[i] == '\0')
            continue;

        if (direct[i] > max)
        {
            max = direct[i];
            maxidx = i;
        }
    }

    cout << char(maxidx) << endl;

    return 0;
}