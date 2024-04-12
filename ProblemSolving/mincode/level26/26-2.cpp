#include <iostream>
#include <string>
using namespace std;

struct Node{
    int a,b;
    char t[6];
};

int main(){

    Node robert;
    Node *p;

    p = &robert;

    cin >> p->a;
    cin >> p->b;
    cin >> p->t;

    cout << robert.a+robert.b << " " << robert.t;

    return 0;
}