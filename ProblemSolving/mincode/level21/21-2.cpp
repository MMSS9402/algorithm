#include <iostream>
#include <cstring>
using namespace std;

char ID[10] = {"qlqlaqkq"};
char PASSWORD[10] = {"tkaruqtkf"};

int main()
{
    char kk[10];
    char ll[10];

    cin >> kk;
    cin >> ll;

    if (!strcmp(kk, ID) && !strcmp(ll, PASSWORD))
    {
        cout << "LOGIN";
    }
    else
    {
        cout << "INVALID";
    }

    return 0;
}