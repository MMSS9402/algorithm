#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // //문자열의 길이를 알려주는 함수.
    // cout << strlen(arr1);

    // 문자열 입력받고
    // 역순출력

    char arr1[10];

    cin >> arr1;

    int len = strlen(arr1);

    for (int i = 0; i < len; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = len - 1; i >= 0; i--)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}