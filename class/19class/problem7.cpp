#include <iostream>
using namespace std;

int main(){

    char buf[10] = "ABC";
    char tt[10] = "KFC";
    char temp[10];
    //strcpy는 뒤에 문자열 붙이기
    strcat(buf,"kkkk");

    cout << buf;

    return 0;
}