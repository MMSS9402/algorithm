#include <iostream>
using namespace std;

int getSum(int a, int b, int c, int d)
{
    return a + b + c + d;
}

int getGop(int a, int b)
{
    return a * b;
}

int getMax(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int v[2][4] = {
        1, 5, 4, 2,
        6, 6, 5, 1};

    // 행
    int d1 = getSum(v[0][0], v[0][1], v[0][2], v[0][3]);
    int d2 = getSum(v[1][0], v[1][1], v[1][2], v[1][3]);
    int boss1 = getMax(d1, d2);

    // 열
    int boss2 = -999999;
    for (int i = 0; i < 4; i++)
    {
        int temp = getGop(v[i][0], v[i][1]);
        if (boss2 > temp)
            boss2 = temp;
    }

    // 2개 비교
    int result = getMax(boss1, boss2);
    cout << result;

    return 0;
}