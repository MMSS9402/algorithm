#include <iostream>
#include <string>
using namespace std;

bool isValid(string id)
{
    // 조건별로 코딩

    // 조건 1. 4~8글자인지
    int len = id.length();
    if (len < 4)
        return false;
    if (len > 8)
        return false;

    // 조건 2. 숫자인지 검사
    if (id[0] >= '0' && id[0] <= '9')
        return false;

    // 조건 3. 소문자 있으면 탈락
    for (int i = 0; i < len; i++)
    {
        if (id[i] >= 'a' && id[i] <= 'z')
            return false;
    }

    for (int i = 0; i < len; i++)
    {
        if (id[i] >= 'A' && id[i] <= 'Z')
            continue;
        if (id[i] >= '0' && id[i] <= 'Z')
            continue;
        return false;
    }

    return true;
}

int main()
{

    string id = "WKL35r";

    bool ret = isValid(id);

    cout << bool(ret);

    return 0;
}