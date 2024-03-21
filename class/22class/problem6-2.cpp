#include <iostream>
using namespace std;

int map[3][4] = {
    {4, 5, 1, 9},
    {9, 5, 3, 3},
    {4, 4, 5, 6},
};

int path[3];

void run(int lev, int sum)
{
    if (lev == 3)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            cout << path[i] << " ";
            sum += path[i];
        }
        cout << "=" << sum << endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        path[lev] = map[lev][i];
        run(lev + 1, sum + map[lev][i]);
        path[lev] = 0;
    }
}

int main()
{

    run(0, 0);

    return 0;
}