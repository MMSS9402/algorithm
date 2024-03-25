#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "ABCDE[TSB]TTD";

    int idx1 = str.find("[") + 1;
    int idx2 = str.find("]", idx1 + 1) - 1;

    string substr = str.substr(idx1, idx2 - idx1 + 1);

    cout << substr;

    return 0;
}