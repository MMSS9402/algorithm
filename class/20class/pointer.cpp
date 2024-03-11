#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int d = 7;
    int *c = &a;
    int *b = &d;

    cout << *c << *b;
}