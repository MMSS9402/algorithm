#include <iostream>
using namespace std;

int main(){

    struct Node{
        int age;
        Node *next1;
        Node *next2;
    };
    Node *head;
    Node simson,woman1,woman2,man1,man2,man3;

    head = &simson;
    head->age = 20;

    head->next1 = &woman1;
    head->next2 = &woman2;

    head->next1->age = 29;
    head->next2->age = 30;

    head->next1->next1 = &man1;
    head->next1->next2 = &man2;
    head->next2->next1 = &woman1;
    head->next2->next2 = &man3;

    head->next1->next1->age = 25;
    head->next1->next2->age = 40;
    head->next2->next2->age = 38;


    return 0;
}