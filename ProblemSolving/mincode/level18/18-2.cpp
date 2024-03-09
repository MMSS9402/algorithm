#include <iostream>
using namespace std;

int main()
{

    int map[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> map[i][j];
        }
    }
    int direct[100] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            direct[map[i][j]]++;
        }
    }

    for (int i = 1; i < 10; i++)
    {
        if (direct[i] != 0)
            continue;
        cout << i << " ";
    }

    return 0;
}