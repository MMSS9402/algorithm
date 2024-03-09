#include <iostream>
using namespace std;

int arr[3][5] = {
    {1, 3, 3, 5, 1},
    {3, 6, 2, 4, 2},
    {1, 9, 2, 6, 5}};

int main()
{
    int N;
    cin >> N;

    int direct[10] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            direct[arr[i][j]]++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (direct[i] == 0)
            continue;
        if (direct[i] == N)
        {
            cout << i << " ";
        }
    }

    return 0;
}