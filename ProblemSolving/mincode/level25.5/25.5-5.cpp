#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    string str;
    cin >> str;
    vector<string> Name;
    vector<int> Number;

    int a = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z' && str[i + 1] <= '9' && str[i + 1] >= '0')
        {
            string temp = str.substr(a, i - a + 1);
            Name.push_back(temp);
            cout << temp << "#";
            a = i + 1;
            continue;
        }
        if (str[i + 1] >= 'A' && str[i + 1] <= 'Z' && str[i] <= '9' && str[i] >= '0')
        {
            int temp = stoi(str.substr(a, i - a + 1)) + 17;
            Number.push_back(temp);
            cout << temp << endl;
            a = i + 1;
            continue;
        }
        if (a == str.length() - 1)
        {
            int temp = str[a] - '0' + 17;
            cout << to_string(temp);
        }
    }

    return 0;
}