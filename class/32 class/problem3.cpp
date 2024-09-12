#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
// 우선순위 높은것이 왼쪽에 등장해야 함
// isCompare(A,B) 가 1을 리턴하면 A가 우선순위가 더 높음
// 만약 A,B 중에 우선순위가 A가 더 낮으면 return

int isCompare(int a, int b)
{
    // a가 우선순위가 더 높으면 1
    // a가 우선순위가 더 낮으면 0 리턴
    // if (a % 2 == 0 && b % 2 != 0)
    // {
    //     return 1;
    // }
    // if ((a % 2 == 0 && b % 2 == 0) && a > b)
    // {
    //     return 1;
    // }
    // if ((a % 2 != 0 && b % 2 != 0) && a > b)
    // {
    //     return 1;
    // }

    if (a % 2 == 0 && b % 2 == 1)
        return 1;
    if (a % 2 == 1 && b % 2 == 0)
        return 0;

    if (a < b)
        return 1;
    return 0;

    return 0;
}

int main()
{
    int n = 7;
    int arr[7] = {4, 3, 2, 1, 6, 4, 5};
    int result[7] = {0};

    for (int i = 0; i < 7; i++)
    {
        result[i] = arr[i];

        for (int x = i; x > 0; x--)
        {
            // isCompare =>앞에가 우선순위가 높으면 1, 낮으면 0 을 출력하는 함수
            if (isCompare(result[x - 1], result[x]) == 0)
            {
                swap(result[x - 1], result[x]);
            }

            else
                break;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}