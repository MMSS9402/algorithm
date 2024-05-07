#include <iostream>
#include <string>
#include <vector>
using namespace std;
int map[10][10];
char path[10];
int n;
void run(int lev, int now)
{
    if (lev == 2)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << path[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (map[now][i] == 1)
        {
            path[lev + 1] = '0' + i;
            run(lev + 1, i);
            path[lev + 1] = 0;
        }
    }
}

int main()
{

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }
    path[0] = '0';
    run(0, 0);

    return 0;
}