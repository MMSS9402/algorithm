#include <iostream>
using namespace std;

int main()
{

    int a = 3;
    int *b;
    int **e;
    int **c;
    int *d;
    int **z;
    int t = 9;
    int *v;

    b = &a;
    e = &b;
    c = &b;
    d = &a;
    z = &d;
    v = &t;

    cout << "b:" << b << endl;
    cout << "*c:" << *c << endl;
    cout << "&b:" << &b << endl;
    cout << "c:" << c << endl;
    cout << "a:" << a << endl;
    cout << "**c:" << **c << endl;

    return 0;
}