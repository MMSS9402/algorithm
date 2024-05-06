#include <iostream>
#include <vector>
#include <string>
using namespace std;

char name[4] = {'B', 'T', 'A', 'R'};
int map[4][4] = {
    0, 0, 0, 0,
    1, 0, 0, 0,
    1, 1, 0, 0,
    1, 1, 0, 0};

int main()
{

    int n;
    cin >> n;

    for (int j = 0; j < 4; j++)
    {
        if (map[n][j] == 1)
        {
            cout << name[j];
        }
    }

    return 0;
}