#include <iostream>
#include <string>
#include <vector>
using namespace std;
string name;
int map[8][8];

void run(int now)
{
    cout << name[now];
    for (int i = 0; i < 8; i++)
    {
        if (map[now][i] == 1)
        {
            run(i);
        }
    }
}

int main()
{
    cin >> name;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> map[i][j];
        }
    }
    run(0);

    return 0;
}