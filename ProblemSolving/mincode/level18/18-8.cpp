#include <iostream>
using namespace std;

int train[] = {3, 7, 6, 4, 2, 9, 1, 7};
int team[3];

int isSame(int idx)
{
    for (int i = 0; i < 3; i++)
    {
        if (train[idx + i] != team[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    for (int i = 0; i < 3; i++)
    {
        cin >> team[i];
    }

    for (int i = 0; i < 8; i++)
    {
        if (isSame(i))
        {
            cout << i << "번"
                 << "~" << i + 2 << "번"
                 << " 칸";
        }
    }

    return 0;
}