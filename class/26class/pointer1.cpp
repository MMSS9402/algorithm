#include <iostream>
using namespace std;

int main()
{
    int x;
    // int *p = &x;
    // int *t = &x;
    int *p;
    int *t;

    p = &x;
    t = &x;

    *p = 10;

    cout << *t;
    return 0;
}