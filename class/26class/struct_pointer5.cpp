#include <iostream>
using namespace std;

int main()
{

    // Node p를 Node 안에 넣는 건 안되지만 Node *p는 가능!
    // Node *p는 Node를 가리키는 그냥 변수니까...!
    struct Node
    {
        int x;
        Node *p;
    };

    Node a, b;

    a.p = &b;

    // (*a.p).x = 10;
    // a.p가 "가리키는곳안에" 있는 x에다가 10을 넣는다!
    a.p->x = 10;

    return 0;
}