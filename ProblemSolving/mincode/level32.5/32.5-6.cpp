#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int map[10][10];
int temp[10][10];
int n, k;

void rotate(int k)
{
    k = k % 4;
    for (int i = 0; i < k; i++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp[j][n - i - 1] = map[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                map[i][j] = temp[i][j];
            }
        }
    }
}
int main()
{

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }
    rotate(k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}