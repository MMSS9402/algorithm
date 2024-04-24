#include <iostream>
#include <vector>
using namespace std;
struct Node{
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


int main(){
    int n;
    cin >> n;
    for(int i=1;i<=4;i++){
        addNode(n*i);
    }
    for (Node *g = h; g != NULL; g = g->p) //
    {
        cout << g->x << " ";
    }
    
}