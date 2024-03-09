#include <iostream>
using namespace std;

int map[3][3] = {
    3, 5, 1,
    3, 8, 1,
    1, 1, 5};

int bitarray[2][2];

int sum(int x, int y)
{
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (bitarray[i][j] == 1)
            {
                sum += map[i + x][j + y];
            }
        }
    }
    return sum;
}

int main()
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> bitarray[i][j];
        }
    }
    int maxx = 0;
    int maxy = 0;
    int max = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (sum(i, j) > max)
            {
                max = sum(i, j);
                maxx = i;
                maxy = j;
            }
        }
    }

    cout << "(" << maxx << "," << maxy << ")";

    return 0;
}