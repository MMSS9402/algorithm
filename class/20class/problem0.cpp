#include <iostream>
using namespace std;

int n;
char path[10];

void run(int lev)
{

    if (lev == n)
    {
        cout << path << "\n";
        return;
    }

    for (int i = 0; i <= 4; i++)
    {
        path[lev] = '0' + i;
        run(lev + 1);
    }
}

int main()
{
    cin >> n;

    run(0);
}