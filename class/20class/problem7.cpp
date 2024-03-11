#include <iostream>
using namespace std;

int a[5] = {1, 2, 3, 4, 5};

void run(int lev, int sum)
{
    cout << sum << " ";
    if (lev == 4)
    {
        return;
    }

    run(lev + 1, sum + a[lev + 1]);
    cout << sum << " ";
}

int main()
{
    run(0, a[0]);

    return 0;
}