#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    cin >> str;

    int dat[200] = {0};
    int max = 0;
    int max_idx = 0;
    int min = 100;
    int min_idx = 0;
    for (int i = 0; i < str.length(); i++)
    {
        dat[str[i]]++;
    }

    for (int i = int('A'); i <= int('K'); i++)
    {
        if (dat[i] > max)
        {
            max = dat[i];
            max_idx = i;
        }
        if (dat[i] < min)
        {
            min = dat[i];
            min_idx = i;
        }
    }
    cout << char(max_idx) << endl;
    cout << char(min_idx) << endl;
}