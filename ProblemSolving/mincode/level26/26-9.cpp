#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main(){

    char str[10];
    cin >> str;

    int data[4];

    for(int i=0;i<4;i++){
        cin >> data[i];
    }

    char *ptrs[4];
    for(int i=0;i<4;i++){
        ptrs[i] = &str[data[i]];
    }

    for(int i=0;i<4;i++){
        cout << *ptrs[i];
    }


    return 0;
}