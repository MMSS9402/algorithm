#include <iostream>

using namespace std;

int main()
{
    char strarr[11];
    cin >> strarr;

    int index;
    cin >> index;

    int len = 0;
    for (int i = 0; i < 11; i++)
    {
        if (strarr[i] == '\0')
        {
            len = i;
            break;
        }
    }

    for (int i = index; i <= len - 1; i++)
    {
        strarr[i] = strarr[i + 1];
    }

    len--;

    cout << strarr << endl;
    ;
    for (int i = len - 1; i >= 0; i--)
    {
        cout << strarr[i];
    }
}