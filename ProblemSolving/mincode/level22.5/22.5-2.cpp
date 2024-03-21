#include <iostream>
using namespace std;
char name[2] = {'x', 'o'};
int n;
char path[3];
void run(int lev)
{
    if (lev == n)
    {
        cout << path << endl;
        return;
    }

    for (int i = 0; i < 2; i++)
    {
        path[lev] = name[i];
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{

    cin >> n;

    run(0);

    return 0;
}