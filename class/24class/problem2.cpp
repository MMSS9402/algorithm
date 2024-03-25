#include <iostream>
#include <string>
using namespace std;

int main()
{

    string bts;
    cin >> bts;
    int len = bts.length();

    for (int i = len - 1; i >= 0; i--)
    {
        cout << bts[i] << " ";
    }
    return 0;
}