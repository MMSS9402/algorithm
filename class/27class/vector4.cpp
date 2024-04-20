#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // vector<string> v(4);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }

    vector<string> v;

    for (int i = 0; i < 4; i++)
    {
        string temp;
        cin >> temp;
        v.push_back(temp);
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i].length() << " ";
    }
    return 0;
}