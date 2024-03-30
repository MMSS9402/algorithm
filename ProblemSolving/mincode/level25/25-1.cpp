#include <iostream>
#include <string>
using namespace std;

string before[5] = {
    "KFC",
    "MC",
    "BICMAC",
    "SHACK",
    "SONY"};

string after[5] = {
    "#BBQ#",
    "#BBQ#",
    "#MACBOOK#",
    "#SHOCK#",
    "#NONY#"};

int main()
{
    string str; //= "ILOVEKFCANDMC!!";
    cin >> str;
    for (int i = 0; i < 5; i++)
    {
        int ret = str.find(before[i]);
        if (ret == -1)
            continue;

        if (ret != -1)
        {
            str.erase(ret, before[i].length());
            str.insert(ret, after[i]);
        }
    }
    cout << str;

    return 0;
}