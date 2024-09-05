#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int map[11] = {4, 5, 1, 1, 5, 4, -3, -13, 9, 20, 13};

// index 부터 연속된 5개의 값의 합을 구해주는 함수.
int getSum(int index)
{
    int sum = 0;
    if (index + 5 > 11)
        return -1;
    for (int i = 0; i < 5; i++)
    {
        sum += map[index + i];
    }
    return sum;
}

int main()
{
    int max = getSum(0);
    int maxidx = 0;

    int sum = getSum(0);
    for (int i = 0; i <= 11 - 5; i++)
    {
        if (sum > max)
        {
            max = sum;
            maxidx = i;
        }
        if (i == 11 - 5)
            break;
        sum -= map[i];
        sum += map[i + 5];
    }

    cout << max << endl;
    cout << maxidx << endl;

    return 0;
}