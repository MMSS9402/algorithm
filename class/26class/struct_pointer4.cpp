#include <iostream>
using namespace std;

int main()
{
    struct BTS
    {
        int a;
        char *p;
    };

    char ch;

    BTS q;

    q.a = 3;

    q.p = &ch;
    // q.p 자체가 하나의 변수
    //*q.p는 이제 ch 자체!!
    *q.p = 'Z';

    return 0;
}