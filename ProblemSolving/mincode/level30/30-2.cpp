#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;
int used[6];
int map[6][6] = {
    0, 0, 1, 0, 2, 0,
    5, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 7,
    2, 0, 0, 0, 8, 0,
    0, 0, 9, 0, 0, 0,
    4, 0, 0, 7, 0, 0};
int sum = 0;
void run(int now)
{
    cout << now << " " << sum << endl;
    for (int i = 0; i < 6; i++)
    {
        if (map[now][i] == 0)
            continue;
        if (used[i] == 1)
            continue;
        used[i] = 1;

        sum = sum + map[now][i];
        run(i);
    }
}
int main()
{
    int k;
    cin >> k;
    used[k] = 1;
    run(k);

    return 0;
}