#include <iostream>
#include <string>
#include <vector>
using namespace std;

int map[5][5] = {
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
};

int main()
{
    char x;
    cin >> x;
    int k = x - 65;

    for (int i = 0; i < 5; i++)
    {
        if (map[k][i] == 0)
            continue;
        cout << char(i + 65);
    }

    return 0;
}