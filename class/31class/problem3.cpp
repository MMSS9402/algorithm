#include <iostream>
#include <string>
#include <vector>
using namespace std;
string str = "ABBABQAADAA";

int main()
{
    int tgt_len = 4;
    int limit = str.length() - tgt_len;
    int max = 0;
    string tgt = str.substr(0, 4);
    for (int i = 0; i < limit; i++)
    {
        int direct[200] = {0};
        for (int i = 0; i < 4; i++)
        {
            direct[tgt[i]]++;
        }
        if (direct[int('A')] > max)
            max = direct[int('A')];
        if (i == limit)
            break;
        tgt.erase(0, 1);
        tgt += str[i + tgt_len];
    }

    cout << max;

    return 0;
}