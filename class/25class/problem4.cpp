#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "AB|007|KFC|MOMS|MC";

    int a = -1;
    int cnt = 0;
    while (1)
    {
        a = str.find('|', a + 1);
        if (a != -1)
        {
            cnt++;
        }
        if (a == -1)
            break;
    }

    string arr[cnt];
    a = -1;
    int b;
    int k = 0;
    for (int i = 0; i < str.length(); i++)
    {
        a = str.find('|', a + 1);
        string t = str.substr(0, a);
        arr[k] = t;

        str.erase(0, arr[i].length() + 1);
        // cout << arr[k] << endl;
        k++;
        // cout << str << endl;
        a = -1;
    }
    return 0;
}