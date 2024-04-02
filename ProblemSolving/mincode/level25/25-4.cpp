#include <iostream>
#include <string>
using namespace std;

string arr[10];

string isValid(string tgt)
{

    // 너무 많은 괄호 한개로 정리
}

int main()
{

    string str;
    cin >> str;
    int a = -1;
    int b = 0;
    int k = 0;

    while (1)
    {
        int c = -1;
        int d = 0;
        a = str.find("(", a + 1);
        if (a == -1)
            break;
        if (str[a + 1] == '(')
            continue;
        b = str.find(")", a + 1);
        // cout << a << " " << b << endl;
        string temp = str.substr(a, b - a + 1);

        a = b;
        c = temp.find('^', c + 1);
        d = temp.find('^', c + 1);
        // cout << c << d << endl;
        if (temp[d + 1] == '^')
        {
            temp.erase(d, 1);
        }
        if (d - c == 2 && temp[c + 1] != '_')
        {
            temp[c + 1] = '_';
        }
        // cout << temp << endl;
        arr[k] = temp;
        k++;
    }

    for (int i = 0; i < k; i++)
    {
        cout << arr[i];
    }

    return 0;
}