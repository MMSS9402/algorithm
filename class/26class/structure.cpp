#include <iostream>
using namespace std;

int main()
{
    struct KT
    {
        int a;
        int b;
    };
    KT a, t;

    a = {1, 2};
    t = {3, 4};

    cout << a.a << " " << a.b << endl;
    cout << t.a << " " << t.b << endl;

    // a.a = 3;
    // a.b = 5;

    // t.a = 7;
    // t.b = 8;

    return 0;
}