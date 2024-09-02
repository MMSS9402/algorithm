#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int arr[5];
int used[5];
int cnt;

void run(int lev, int sum)
{

    if (lev == 5)
    {
        if (sum >= 10 && sum <= 20)
        {
            cnt++;
        }
        return;
    }
    run(lev + 1, sum + arr[lev]);
    run(lev + 1, sum);
}

int main()
{

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    run(0, 0);

    cout << cnt;

    return 0;
}