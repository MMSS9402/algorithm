#include <iostream>
#include <string>
#include <vector>
using namespace std;

int valid(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (!(str[i] >= int('a') && str[i] <= int('z')))
        {

            return 0;
        }
    }

    int direct[200] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        direct[str[i]]++;
    }
    for (int i = 0; i < 200; i++)
    {
        if (direct[i] == 0)
            continue;
        if (direct[i] > 2)
            return 0;
    }

    for (int i = 0; i < 200; i++)
    {
        int cnt = direct[int('a')] + direct[int('e')] + direct[int('i')] + direct[int('o')] + direct[int('u')];
        if (cnt != 3)
            return 0;
    }

    return 1;
}

int main()
{

    int n;
    cin >> n;

    string str[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int ret = valid(str[i]);
        if (ret)
            cout << "good" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}