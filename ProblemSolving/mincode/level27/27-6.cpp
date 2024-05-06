#include <iostream>
#include <vector>
#include <string>
using namespace std;
char map[3][4] = {
    {"_54"},
    {"3__"},
    {"__1"},
};
char result[3][4];

void rotation()
{
    for (int i = 0; i < 3; i++)
    {
        result[i][0] = map[2][i];
        result[i][1] = map[1][i];
        result[i][2] = map[0][i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            map[i][j] = result[i][j];
        }
    }
}

int main()
{
    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        rotation();
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }

    return 0;
}