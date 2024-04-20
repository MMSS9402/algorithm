#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> m = {
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 0, 1, 1},
        {0, 1, 1, 0, 0},
        {0, 0, 0, 0, 0},
    };
    int n;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (m[n][i] == 0)
            continue;
        if (m[n][i] == 1)
            cout << i;
    }

    return 0;
}