#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string str = "ACQRAGGVHDI";

int compare(char a, char b){
    if((a>='C' && a<='H') && !(b>='C' && b<='H')) return 1;
    if(!(a>='C' && a<='H') && (b>='C' && b<='H')) return 0;

    return a>b;
}

int main(){

    sort(&str[0],&str[0]+11,compare);

    cout << str;


    return 0;
}