#include <iostream>
using namespace std;
char da[15] = "ABFRCBTRV";
char db[3] = "BTR";

int isSame(int idx)
{
    for (int i = 0; i < 3; i++)
    {
        if (da[idx + i] == db[i])
            return 1;
    }
    return 0;
}

int main()
{
    int ret = isSame(1);
    if (ret)
        cout << "O";
    else
        cout << "X";
    return 0;
}