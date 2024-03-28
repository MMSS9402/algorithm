#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str;
    cin >> str;
    float passcnt = 0;
    float failcnt = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }

    for (int i = 0; i < str.length(); i++)
    {
        int ret = str.find("pass", i);
        if (ret != -1)
        {
            passcnt++;
            i = ret;
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        int ret = str.find("fail", i);
        if (ret != -1)
        {
            failcnt++;
            i = ret;
        }
    }

    cout << int((passcnt / (failcnt + passcnt)) * 100) << "%";

    return 0;
}