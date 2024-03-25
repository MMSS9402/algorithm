#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = {"ABCDATABTAB"};
    // cin >> str;
    int cnt = 0;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        int ret = str.find("AB", i);
        if (ret != -1)
        {
            i = ret;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}