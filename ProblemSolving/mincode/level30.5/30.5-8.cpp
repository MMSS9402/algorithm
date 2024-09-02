#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

char arr[4] = {'B', 'I', 'A', 'H'};
int used[4];

int main()
{

    int n;
    cin >> n;

    int flag = 1;
    int k = 1;
    int t = 0;
    while (flag)
    {
        for (int i = 0; i < 4; i++)
        {
            if (used[i] == 1)
                continue;
            if (k == n)
            {
                t++;
                used[i] = 1;
                cout << arr[i] << " ";
                k = 1;
                continue;
            }
            k++;
        }

        if (t == 4)
        {
            flag = 0;
        }
    }

    return 0;
}