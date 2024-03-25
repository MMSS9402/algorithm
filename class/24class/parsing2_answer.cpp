#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = {"ABCDATABTAB"};
    int a = 0;
    int cnt = 0;
    while (1)
    {
        int ret = str.find("AB", a);
        if (ret == -1)
            break;

        cnt++;
        a = ret + 1;
    }
    cout << cnt;

    return 0;
}