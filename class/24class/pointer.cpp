#include <iostream>
#include <string>
using namespace std;

int main()
{

    const char *p = "ABCDE"; // 메모리 읽기전용 공간에 올라가서 값을 못바꿈...

    cout << p[0];

    // 캐릭터 배열을 스트링으로 변경
    char vect[10] = "ABKLSAK";

    string a = vect;

    // 스트링을 캐릭터 배열로 변경
    string str = "ABCDE";
    // str.c_str을 하면 스트링을 c스타일 배열로 변경
    // 이 때, const char * 형태로 리턴
    const char *p = str.c_str();
    // p를 배열처럼 쓰면 됨!

    return 0;
}