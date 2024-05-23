#include <iostream>
#include <string>
#include <vector>
using namespace std;

string name = "BTAR";
int used[4];
int map[4][4] = {
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
};

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < 4; i++)
    {
        if (map[n][i] == 0)
            continue;
        cout << name[i];
    }

    return 0;
}