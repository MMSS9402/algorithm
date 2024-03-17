#include <iostream>
using namespace std;
int n;

void run(int lev)
{
    if (lev == n + 1)
    {
        return;
    }
    cout << lev;
    for (int i = 0; i < 2; i++)
    {

        run(lev + 1);
    }
}

int main()
{

    cin >> n;
    run(0);
}