#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Node
{
    int x;
    Node *p;
};

Node *h;
Node *Last;

int main()
{
    int n;
    cin >> n;

    char t = char(n + 54);

    h = new Node();
    h->x = t;
    Last = h;

    Last->p = new Node();
    Last = Last->p;
    Last->x = t + 1;

    Last->p = new Node();
    Last = Last->p;
    Last->x = t + 2;

    Last->p = new Node();
    Last = Last->p;
    Last->x = t + 3;

    for (Node *g = h; g != NULL; g = g->p) //
    {
        cout << char(g->x);
    }

    return 0;
}