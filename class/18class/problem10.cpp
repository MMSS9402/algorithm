#include <iostream>
using namespace std;

int main()
{

    char arr[10];
    cin >> arr;

    char input[3];
    cin >> input[0] >> input[1] >> input[2];

    int dat[200] = {0};

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == '\0')
            break;
        dat[arr[i]] = 1;
    }

    for (int i = 0; i < 3; i++)
    {
        char ch = input[i];

        if (dat[ch] == 1)
            cout << "O";
        else
            cout << "X";
    }

    return 0;
}