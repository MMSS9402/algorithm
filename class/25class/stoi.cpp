#include <iostream>
#include <string>
using namespace std;

int main(){
    string a = "234123";

    //문자로 된 숫자열이 숫자로 바뀜 stoi!!!
    int b = stoi(a);

    string c = "234d123";
    //중간에 숫자로 된 문자가 아니라 진짜 문자가 있다면??
    //문자가 나오기 전까지 숫자까지만 숫자로 바뀜!
    int d = stoi(c);

    return 0;
}