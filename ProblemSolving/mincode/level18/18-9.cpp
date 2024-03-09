#include <iostream>
using namespace std;

int apt[5][3] = {
    {15, 18, 17},
    {4, 6, 9},
    {10, 1, 3},
    {7, 8, 9},
    {15, 2, 6}};

int family[3];

int isPattern(int x)
{

    for (int j = 0; j < 3; j++)
    {
        if (apt[x][j] != family[j])
            return 0;
    }

    return 1;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        cin >> family[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (isPattern(i))
        {
            cout << 5 - i << "층";
        }
    }

    return 0;
}