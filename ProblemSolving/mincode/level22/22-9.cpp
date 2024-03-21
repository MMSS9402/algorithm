#include <iostream>
#include <cstring>
using namespace std;

char arr[5][10] = {
    "Jason",
    "Dr.tom",
    "EXEXI",
    "GK12P",
    "POW",
};

int main()
{
    char arr2[10];
    cin >> arr2;
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if (!strcmp(arr[i], arr2))
        {
            flag = 1;
        }
    }
    if (flag)
        cout << "암호해제";
    else
        cout << "암호틀림";
}