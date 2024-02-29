// 배열 2개가 똑같은지 다른지 판단하는 문제
#include <iostream>
using namespace std;

int arr1[4] = {1, 4, 2, 5};
int arr2[4] = {1, 4, 3, 5};

int isSame()
{

    for (int i = 0; i < 4; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int ret = isSame();

    if (ret)
        cout << "O";
    else
        cout << "X";

    return 0;
}