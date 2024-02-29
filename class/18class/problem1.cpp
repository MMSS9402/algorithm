// 배열 2개가 똑같은지 다른지 판단하는 문제
#include <iostream>
using namespace std;

int main()
{
    int arr1[1][4];
    int arr2[1][4];
    int flag = 1;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr1[0][i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> arr2[0][i];
    }

    for (int i = 0; i < 4; i++)
    {
        if (arr1[0][i] != arr2[0][i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "두 배열이 같습니다." << endl;
    }
    else
    {
        cout << "두 배열이 다릅니다." << endl;
    }

    return 0;
}