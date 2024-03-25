#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "ABCDEFG";

    string ret = str.substr(1, 5);

    cout << ret << endl;

    return 0;
}