#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str = "ABC";
    cout << str[0]; // A

    vector<string> v = {"ABC", "BTS"};

    cout << v[0][1];

    return 0;
}