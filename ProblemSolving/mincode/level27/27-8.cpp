#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    string str;
    cin >> str;

    int direct[200] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        direct[str[i]]++;
    }
    int cnt = 0;

    for (int i = 0; i < 200; i++)
    {
        if (direct[i] == 0)
            continue;
        if (direct[i] != 0)
            cnt++;
    }
    cout << cnt << "종류";

    return 0;
}