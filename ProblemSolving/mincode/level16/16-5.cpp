#include <iostream>

using namespace std;

int main()
{

    char arr[10];
    cin >> arr;

    int index;
    cin >> index;
    int len = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == '\0')
        {
            len = i;
            break;
        }
    }

    for (int i = index; i < len; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << arr;
    return 0;
}