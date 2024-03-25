#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "ABCDEFG";
    // cin >> str;

    int a, b;
    cin >> a >> b;

    string substr = str.substr(a, b - a + 1);

    cout << substr;

    return 0;
}