#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node
{
    int x;
    Node *next;
};

Node *head[4];
Node *last[4];

void addNode(int from, int n)
{
    if (head[from] == NULL)
    {
        head[from] = new Node();
        last[from] = head[from];
        head[from]->x = n;
    }
    else
    {
        last[from]->next = new Node();
        last[from] = last[from]->next;
        last[from]->x = n;
    }
}

int main()
{

    addNode(1, 0);
    addNode(1, 3);
    addNode(2, 1);
    addNode(2, 3);

    return 0;
}