#include <iostream>
using namespace std;

int x;

void run()
{
    if (x == 2)
    {
        return;
    }
    x++;
    run();
    cout << "#";
}

int main()
{

    run();

    return 0;
}