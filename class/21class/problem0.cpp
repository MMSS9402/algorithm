#include <iostream>
using namespace std;

void run(int lev)
{
    if (lev == 4)
    {
        return;
    }
    cout << "#"
         << " ";
    run(lev + 1);
}

int main()
{
    run(0);
    return 0;
}