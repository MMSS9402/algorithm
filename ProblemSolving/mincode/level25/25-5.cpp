#include <iostream>
#include <string>
using namespace std;
string arr[10];
int main()
{

    string str = "bbq@mcdonald.co.kr|jyp@sam.com|imac@donald.com|mmss9402@naver.com";

    int a = -1;
    int b = 0;
    int len = str.length();

    while (1)
    {
        if (a + 1 == 0)
        {
            a = str.find('|', a + 1);
            string temp = str.substr(0, a);
            cout << temp << endl;
        }
        a = str.find('|', a + 1);
        b = str.find('|', a + 1);
        if (a == -1 && b == -1)
            break;
        if (b == -1 && a != -1)
        {
            string temp = str.substr(a + 1, len - a + 1);
            cout << " last" << temp;
        }
        string temp = str.substr(a + 1, b - a + 1);
        cout << temp << endl;
        break;
    }

    return 0;
}