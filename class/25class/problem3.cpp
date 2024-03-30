#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "AS[]SDF[SDFSDF]QW";
    string result[10];
    int t = 0;
    int a = -1;
    int b = 0;
    while (1)
    {
        if (a == str.length())
            break;
        b = str.find('|', a + 1);
        if (b == -1)
        {
            b = str.length();
        }

        int size = (b - 1) - (a + 1) + 1;
        string temp = str.substr(a + 1, size);
        result[t++] = temp;

        a = b;
    }

    cout << str;

    return 0;
}