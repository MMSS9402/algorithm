#include <iostream>
#include <vector>
#include <string>

using namespace std;

int a, b;

int map[6][6] = {
    0,
    2,
    6,
    3,
    0,
    0,
    2,
    0,
    7,
    4,
    0,
    0,
    6,
    7,
    0,
    0,
    0,
    0,
    3,
    4,
    2,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    7,
    0,
    0,
    0,
    0,
    0,
    0,
};
int used[6];

int cnt;
int cheap = 999;
int expensive = 0;

void run1(int now, int sum)
{
    if (now == b)
    {
        cnt++;
        if (sum < cheap)
            cheap = sum;
        if (sum > expensive)
            expensive = sum;
        return;
    }
    cout << now << " ";
    for (int i = 0; i < 6; i++)
    {
        if (map[now][i] == 0)
            continue;
        if (used[i] == 1)
            continue;
        used[i] = 1;
        run1(i, sum + map[now][i]);
        used[i] = 0;
    }
}

void run2(int now)
{
    cout << now << " ";
    for (int i = 0; i < 6; i++)
    {
        if (map[now][i] == 0)
            continue;
        if (used[i] == 1)
            continue;
        int next = i;
        used[next] = 1;
        run2(next);
    }
}

int main()
{
    cin >> a;
    cin >> b;
    run1(a, 0);
    cout << endl;
    cout << cnt << "개" << endl;
    cout << "가장 비싼 경로:" << expensive << endl;
    cout << "가장 싼 경로 : " << cheap << endl;
    return 0;
}