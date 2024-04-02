#include <iostream>
#include <string>
using namespace std;

string str;

void removeChar(char ch)
{
    // 괄호 한개로 정리

    string tar;
    tar += ch;
    tar += ch;

    int a = -1;
    int b;
    while (1)
    {
        a = str.find(tar, a + 1);
        if (a == -1)
            break;

        for (int i = a; i <= str.length(); i++)
        {
            if (str[i] != ch)
            {
                b = i;
                break;
            }
        }

        int size = b - a - 1;
        str.erase(a, size);
    }
}

void step1()
{
    removeChar('(');
    removeChar(')');
}
void step2()
{
    // 눈웃음 ^^ 두개로 정리

    int a = -1;
    int b;
    while (1)
    {
        a = str.find("^^^", a + 1);
        if (a == -1)
            break;

        for (int i = a; i <= str.length(); i++)
        {
            if (str[i] != '^')
            {
                b = i;
                break;
            }
        }

        int size = b - a - 2;
        str.erase(a, size);
    }
}
void step3()
{
    // 눈과 눈 사이 _ 하나로 정리
    int a = -1;
    int b = 1;

    while (1)
    {
        a = str.find('^', a + 1);
        if (a == -1)
            break;
        if (a + 2 >= str.length())
            break;

        if (str[a + 2] == '^')
            str[a + 1] = '_';
    }
}

int main()
{
    // freopen("Text.txt", "r", stdin);
    cin >> str;

    step1();
    step2();
    step3();

    cout << str;

    return 0;
}