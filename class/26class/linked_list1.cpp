#include <iostream>
using namespace std;
struct Node
{
    int x;
    Node *p;
};
Node *h;
Node *Last;

void addNode(int n)
{
    if (h == NULL)
    {
        h = new Node();
        h->x = n;
        Last = h;
    }
    else
    {
        Last->p = new Node();
        Last = Last->p;
        Last->x = n;
    }
}

int main()
{
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);

    for (Node *p = h; p != NULL; p = p->p)
    {
        cout << p->x;
    }

    return 0;
}