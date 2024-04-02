#include <iostream>
using namespace std;

int main()
{

    struct Node
    {
        int x;
        Node *p;
    };

    Node *h;
    Node a, b, c, d;

    h = &a;

    h->x = 1;
    h->p = &b;
    h->p->x = 3;
    h->p->p = &c;
    h->p->p->x = 5;
    h->p->p->p = &d;
    h->p->p->p->x = 7;
    h->p->p->p->p = NULL;

    // 가독성을 위해서 for문으로!!
    for (Node *g = h; g != NULL; g = g->p) //
    {
        cout << g->x;
    }

    // // 링크드리스트 탐색방법
    // Node *ga = h;
    // while (ga != NULL)
    // {
    //     cout << ga->x;
    //     ga = ga->p;
    // }

    // //계속 오른쪽으로 이동하면서 출력!!
    // cout << ga->x;
    // ga = ga->p;

    // cout << ga->x;
    // ga = ga->p;

    // cout << ga->x;
    // ga = ga->p;

    // cout << ga->x;
    // ga = ga->p;
    return 0;
}