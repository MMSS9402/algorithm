#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>

using namespace std;

string aba = "ABA";
string str = "ABABTABCABABAACD";
int cnt = 0;
int main()
{

    string sum = str.substr(0, 3);
    int limit = str.length() - aba.length();

    for (int i = 0; i <= limit; i++)
    {
        if (sum == aba)
            cnt++;

        if (i == limit)
            break;

        sum.erase(0, 1);
        sum += str[i + aba.length()];
    }
    cout << cnt << "개";
    return 0;
}