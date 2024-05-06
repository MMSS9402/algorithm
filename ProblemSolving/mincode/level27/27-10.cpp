#include <iostream>
#include <string>
#include <vector>
using namespace std;

int A[3][3] = {
    2, 6, 3,
    7, 1, 1,
    3, 4, 2};
int B[2][4] = {
    6, 4, 2, 4,
    1, 1, 5, 8};
int C[2][3] = {
    9, 2, 3,
    4, 2, 1};

int dA[3][3] = {0};
int dB[2][4] = {0};
int dC[2][3] = {0};

int getMaxA()
{
    int max = 0;
    int idx_x = 0;
    int idx_y = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] > max && dA[i][j] == 0)
            {
                max = A[i][j];
                idx_x = i;
                idx_y = j;
            }
        }
    }
    dA[idx_x][idx_y] = 1;
    return max;
}

int getMinB()
{
    int min = 999;
    int idx_x = 0;
    int idx_y = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (B[i][j] < min && dB[i][j] == 0)
            {
                min = B[i][j];
                idx_x = i;
                idx_y = j;
            }
        }
    }
    dB[idx_x][idx_y] = 1;
    return min;
}

int getMaxC()
{
    int max = 0;
    int idx_x = 0;
    int idx_y = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (C[i][j] > max && dC[i][j] == 0)
            {
                max = C[i][j];
                idx_x = i;
                idx_y = j;
            }
        }
    }
    dC[idx_x][idx_y] = 1;
    return max;
}

int getMinC()
{
    int min = 999;
    int idx_x = 0;
    int idx_y = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // cout << C[i][j] << endl;
            if (C[i][j] < min && dC[i][j] == 0)
            {

                min = C[i][j];
                idx_x = i;
                idx_y = j;
            }
        }
    }
    dC[idx_x][idx_y] = 1;
    return min;
}

int main()
{
    int result[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        result[0][i] = getMaxA();
        result[1][i] = getMinB();
    }
    result[2][0] = getMinC();
    result[2][1] = getMinC();
    result[2][2] = getMaxC();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}