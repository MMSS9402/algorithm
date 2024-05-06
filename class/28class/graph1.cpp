#include <iostream>
#include <vector>
#include <string>
using namespace std;

// char name[6] = {"ABCDE"};

int map[5][5] = {
    0, 0, 0, 0, 0,
    1, 0, 1, 0, 1,
    0, 1, 0, 0, 0,
    0, 1, 0, 0, 0,
    0, 0, 0, 0, 0};

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (map[i][n] == 1)
        {
            cout << char(i + 65);
        }
    }

    return 0;
}