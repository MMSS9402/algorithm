#include <iostream>

using namespace std;

int main()
{
    char strarr[10];
    cin >> strarr;

    int len = 0;
    for (int i = 0; i < 10; i++)
    {
        if (strarr[i] == '\0')
        {
            len = i;
            break;
        }
    }

    if (len % 2 == 0)
    {
        cout << "ERROR\n";
        return 0;
    }

    int last = len - 1;
    int mid = len / 2;

    int temp = strarr[last];
    strarr[last] = strarr[mid];
    strarr[mid] = temp;

    for (int i = len - 1; i >= 0; i++)
    {
        cout << strarr[i];
    }

    return 0;
}