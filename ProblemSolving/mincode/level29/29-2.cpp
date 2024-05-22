#include <iostream>
#include <vector>
#include <string>
using namespace std;
int map[6][6] = {
    0,
    0,
    1,
    0,
    1,
    1,
    1,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};
int used[6];
int a, b;
int mini = 99;

void run(int now, int sum)
{
    if (now == b)
    {
        if (sum < mini)
            mini = sum;
        return;
    }
    for (int i = 0; i < 6; i++)
    {
        if (map[now][i] == 0)
            continue;
        if (used[i] == 1)
            continue;
        used[i] = 1;
        run(i, sum + 1);
        used[i] = 0;
    }
}
int main()
{

    cin >> a >> b;
    used[a] = 1;
    a = a - 1;
    b = b - 1;
    run(a, 0);
    if (mini != 99)
        cout << mini;
    else
        cout << 0;

    return 0;
}