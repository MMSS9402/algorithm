#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int arr[5] = {4, 5, 1, 6, 3};
vector<int> v;

int main()
{

    int result[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        // 1.맨 뒤에 넣기
        result[i] = arr[i];

        // 2.이자리가 내 자리인가 체크하기
        for (int x = i; x > 0; x--)
        {
            if (result[x - 1] > result[x])
            {
                swap(result[x - 1], result[x]);
            }
            else
                break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}