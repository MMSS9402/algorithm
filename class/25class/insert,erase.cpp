#include <iostream>
#include <string>

using namespace std;

int main(){

    string str = "ABCDEFG";
    //문자열에 3번 인덱스부터 BTS 문자열을 집어넣음
    str.insert(3,"BTS");

    //3번 인덱스부터 4글자를 지워라!
    str.erase(3,4);

    return 0;
}