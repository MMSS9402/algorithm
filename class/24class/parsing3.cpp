#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str[3] = {
        {"ATBGOLDAGOLDB"},
        {"GOLDGOLDINAGOLD"},
        {"GOLDAAABBC"}};

    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < str[i].length(); j++)
        {
            int ret = str[i].find("GOLD", j);
            if (ret != -1)
            {
                cnt++;
                j = ret;
            }
        }
    }
    cout << cnt;

    return 0;
}