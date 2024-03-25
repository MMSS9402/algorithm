#include <iostream>
#include <string>
using namespace std;

int main()
{

    // 구조체 변수처럼 클래스 변수가 만들어짐!
    // 이 때 bts는 string 클래스의 변수라서 "인스턴스"라고 부름!
    string bts = "ABCDEF";

    // cin >> bts;
    cout << bts << endl;

    cout << "bts[3]:" << bts[3] << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << bts[i];
    }

    cout << endl;
    // .length()는 bst 변수 안에 있는 메서드!
    cout << "length : " << bts.length() << endl;

        return 0;
}