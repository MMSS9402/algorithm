#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char arr[10];
    cin >> arr;

    int dat[200] = {0};

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != '\0')
        {
            dat[arr[i]]++;
        }
    }

    for (int i = 0; i < 200; i++)
    {
        if (dat[i] == 0)
        {
            continue;
        }
        cout << char(i) << ":" << dat[i] << endl;
    }

    return 0;
}