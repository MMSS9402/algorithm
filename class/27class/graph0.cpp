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
    int max = -9999;
    int maxIdx;
    for (int x = 0; x < 5; x++)
    {
        int cnt = 0;
        for (int y = 0; y < 5; y++)
        {
            cnt += m[y][x];
        }
        if (cnt > max)
        {
            max = cnt;
            maxIdx = x;
        }
    }

    cout << maxIdx << "번";

    return 0;
}