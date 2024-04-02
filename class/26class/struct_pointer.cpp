#include <iostream>
using namespace std;

int main()
{

    struct ABC
    {
        int a, b;
    };
    ABC x;

    ABC *p;

    // p가 x를 가리킴
    p = &x;

    // p가 x를 가리킨다는 것은 *p는 그냥 x라는 뜻인데
    // 그래서 *p.a = 10;을 하면 될 것 같지만 에러가 남!
    // 우선순위가 .이 더 높기 때문에 괄호를 쳐 주어야 함!
    (*p).a = 10;

    return 0;
}