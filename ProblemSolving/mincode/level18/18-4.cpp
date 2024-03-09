#include <iostream>
using namespace std;

int main()
{
    char arr[15];

    cin >> arr;

    int direct[200] = {0};

    for (int i = 0; i < 15; i++)
    {
        if (arr[i] == '\0')
            break;
        direct[arr[i]]++;
    }
    int cnt = 0;
    for (int i = 0; i < 200; i++)
    {
        if (direct[i] == 0 && direct[i] == '\0')
            continue;
        else
            cnt++;
    }

    cout << cnt << "개";

    return 0;
}