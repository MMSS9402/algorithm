#include <iostream>
using namespace std;

int main()
{

    struct BTS
    {
        int a, b;
    };

    BTS x;
    BTS *p = &x;
    BTS *g = &x;

    // p를 이용 3,4 넣기
    // g를 이용 모두 출력
    (*p).a = 3;
    (*p).b = 4;

    // cout << (*g).a << " " << (*g).b << endl;

    // 구조체 포인터 g가 "가린킨곳안" a
    //  ->는 구조체 포인터에만 사용가능..!
    cout << g->a << " " << g->b << endl;

    return 0;
}