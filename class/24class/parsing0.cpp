#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "ABCABCABC";

    // 찾으면 문자열이 시작하는 인덱스!
    // 못찾으면 -1 리턴!
    int ret = str.find("CAB");
    return 0;
}