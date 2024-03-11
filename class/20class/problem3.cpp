#include <iostream>
using namespace std;

void run(int lev)
{

    if (lev == 4)
    {
        return;
    }
    cout << lev << " ";
    run(lev + 1);
    cout << lev << " ";
}

int main()
{
    run(0);
    return 0;
}