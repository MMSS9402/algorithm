#include <iostream>
#include <string>
using namespace std;

int getCnt(string line)
{
    int cnt = 0;
    int a = 0;
    while (1)
    {
        int ret = line.find("GOLD", a);
        if (ret == -1)
            break;
        cnt++;
        a = ret + 1;
    }
    return cnt;
}

int main()
{

    string str[3] = {
        {"ATBGOLDAGOLDB"},
        {"GOLDGOLDINAGOLD"},
        {"GOLDAAABBC"}};

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        // cout << getCnt(str[i]);
        sum += getCnt(str[i]);
    }
    cout << sum;

    return 0;
}