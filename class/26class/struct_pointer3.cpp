#include <iostream>
using namespace std;

int main()
{

    struct Data
    {
        int a, b;
    };

    Data BTS[4] = {{3, 7}, {1, 4}, {2, 5}, {3, 6}};

    Data *p = &BTS[1];
    Data *g = &BTS[3];
    // 포인터 쓸 때는 ++을 되도록 쓰지말자!
    p->a += 1;
    p->b += 1;
    g->a += 1;
    g->b += 1;

    cout << p->a << " " << p->b << endl;
    cout << g->a << " " << g->b << endl;

    return 0;
}