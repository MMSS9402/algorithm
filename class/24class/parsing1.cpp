#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str[4] = {
        {"BTS"},
        {"GODGOD"},
        {"TSTS"},
        {"KFCT"},
    };

    for (int i = 0; i < 4; i++)
    {
        if (str[i].find("TS") != -1)
        {
            cout << "O"
                 << " ";
        }
        else
        {
            cout << "X"
                 << " ";
        }
    }

    return 0;
}