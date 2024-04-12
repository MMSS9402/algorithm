#include <iostream>
#include <string>
using namespace std;

int main(){

    struct Node{
        int x;
        Node *next;
    };

    Node a,b,c;

    a.x = 3;
    b.x = 5;
    c.x = 4;

    a.next = &b;
    b.next = &c;
    c.next = NULL;




    return 0;

}