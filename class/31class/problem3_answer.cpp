#include <iostream>
#include <string>
#include <vector>
using namespace std;
string str = "ABBABQAADAA";

int main()
{
    int dat[100] = {0};
    int max = 0;
    for (int i = 0; i < 4; i++)
    {
        dat[str[i]]++;
    }
    int limit = str.length() - 4;
    for (int i = 0; i <= limit; i++)
    {
        if (dat['A'] > max)
            max = dat['A'];
        if (i == limit)
            break;
        dat[str[i]]--;
        dat[str[i + 4]]++;
    }
    cout << max;

    return 0;
}