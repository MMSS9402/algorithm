#include <iostream>

using namespace std;

int main()
{

    char arr1[10];
    char arr2[10];
    char arr3[10];

    cin >> arr1;
    cin >> arr2;
    cin >> arr3;

    int flag = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr1[i] == 'M' || arr2[i] == 'M' || arr3[i] == 'M')
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "M이 존재합니다";
    }
    else
    {
        cout << "M이 존재하지 않습니다";
    }

    return 0;
}