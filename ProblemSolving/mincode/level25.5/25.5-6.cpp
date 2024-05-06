#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> v;

int valid(string str)
{
    int start_idx = 0;
    int End_idx = 0;
    if (str.find("http://") == -1 && str.find("https://") == -1)
    {
        return 0;
    }

    if ((str.find(".com") == -1 && str.find(".co.kr") == -1 && str.find(".net") == -1))
        return 0;

    if (str.find(".com") != -1)
    {
        End_idx = str.find(".com");
    }
    if (str.find(".co.kr") != -1)
    {
        End_idx = str.find(".co.kr");
    }
    if (str.find(".net") != -1)
    {
        End_idx = str.find(".net");
    }

    if (str.find("http://") != -1)
    {
        start_idx = str.find("http://") + 6;
    }
    if (str.find("https://") != -1)
    {
        start_idx = str.find("https://") + 6;
    }
    // cout << start_idx << End_idx;
    if (!(End_idx - start_idx >= 3))
        return 0;

    return 1;
}

int main()
{

    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= int('A') && str[i] <= int('Z'))
        {
            str[i] = int(str[i]) + 32;
        }
    }

    int a = 0;
    int b = -1;
    while (1)
    {
        a = str.find("http", a);
        b = str.find("http", a + 1);
        if (a != -1 && b != -1)
        {
            string p = str.substr(a, b - a);
            v.push_back(p);
            a = b;
        }
        if (a != -1 && b == -1)
        {
            string p = str.substr(a, str.length() - a);
            v.push_back(p);
            a = b;
        }
        if (a == -1 && b == -1)
            break;
    }
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int ret = valid(v[i]);
        if (ret)
            cnt++;
    }

    cout << cnt << "개";

    return 0;
}