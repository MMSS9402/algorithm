#include <iostream>
using namespace std;
char da[5] = {'A', 'B', 'T', 'R', 'C'};
char db[3] = {'B', 'T', 'R'};

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