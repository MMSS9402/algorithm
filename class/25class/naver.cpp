#include <iostream>
#include <string>
using namespace std;

string emails[4] = {
    "d@co@m.com",
    "a@abc.com",
    "b@def.com",
    "c@ghi.net"};

int isValid(string str)
{
    // valid 검사 --> 특이한 데이터 다들어옴
    //@,. 하나만 있어야하고, @ 다음 .하나 있어야함
    int a, b;
    a = str.find("@");
    if (a == -1)
        return 0;
    b = str.find("@", a + 1);
    if (b != -1)
        return 0;

    int c, d;
    c = str.find('.', a + 1);
    if (c == -1)
        return 0;
    d = str.find('.', c + 1);
    if (d != -1)
        return 0;

    // 이름,도메인네임,도메인 구분
    string name = str.substr(0, a);
    string domain = str.substr(a + 1, c - a - 1);
    string top = str.substr(c + 1);
    // 2. 탑 도메인은 com,net,org 중 하나다.
    if (!(top == "com" || top == "net" || top == "org"))
        return 0;

    // 여기 이후로부터는
    // name, domain, top이 각 조건에 맞는지 검사
}

int solution()
{

    // valid 검사 --> 특이한 데이터 다들어옴
    //@,. 하나만 있어야하고, @ 다음 .하나 있어야함
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        cnt += isValid(emails[i]);
    }
    return cnt;

    // 형태는 이름@도메인이름.탑레밸도메인 이어야 한다.

    // 이름은 영문 소문자와 . 으로만 구성된다.
    // 도메인 이름은 영문 소문자로만 구성된다.
    // 탑레벨 도메인은 com net org 중 하나이다.

    return 0;
}

int main()
{

    int ret = solution();
    if (ret == 3)
        cout << "성공";
    else
        cout << "실패";

    return 0;
}