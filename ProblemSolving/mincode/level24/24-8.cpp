#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    cin >> str;

    string tgt;
    int a, b, c;
    cin >> a >> b >> c;
    tgt = str.substr(a, b - a + 1);
    for (int i = 0; i < c; i++)
    {
        cout << tgt;
    }
    return 0;
}