#include <iostream>
using namespace std;

void run(int lev)
{

    if (lev == 0)
    {
        cout << "도착 ";
        return;
    }
    cout << lev << " ";
    run(lev - 1);
    cout << lev << " ";
}

int main()
{
    run(5);
    return 0;
}