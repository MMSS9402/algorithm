#include <iostream>
using namespace std;

void run(int x)
{

    if (x == 2)
    {
        return;
    }

    run(x + 1);
    cout << "#";
}

int main()
{
    run(0);
    return 0;
}