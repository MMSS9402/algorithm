#include <iostream>
using namespace std;

int image[4][4];

int rectSum(int x, int y)
{
    int direct[6][2] = {
        0, 0,
        0, 1,
        0, 2,
        1, 0,
        1, 1,
        1, 2};
    int sum = 0;
    for (int t = 0; t < 6; t++)
    {
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if (dx >= 0 && dx < 4 && dy >= 0 && dy < 4)
        {
            sum += image[dx][dy];
        }
    }
    return sum;
}

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> image[i][j];
        }
    }
    int maxx = 0;
    int maxy = 0;
    int max = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (rectSum(i, j) > max)
            {
                max = rectSum(i, j);
                maxx = i;
                maxy = j;
            }
        }
    }

    cout << "(" << maxx << "," << maxy << ")";

    return 0;
}