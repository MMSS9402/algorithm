#include <iostream>
using namespace std;

char abc[2][4] = {
    "GKG"};

int main()
{
    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> abc[i][j];
        }
    }

    int direct[200] = {0};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            direct[abc[i][j]]++;
        }
    }
    int flag = 0;
    for (int i = 0; i < 200; i++)
    {
        if (direct[i] == 0 && i == '\0')
            continue;

        if (direct[i] >= 3)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "있음";
    }
    else
        cout << "없음";

    return 0;
}