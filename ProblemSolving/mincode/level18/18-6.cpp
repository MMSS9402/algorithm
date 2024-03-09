#include <iostream>
using namespace std;

char town[3][3] = {
    {'C', 'D', 'A'},
    {'B', 'M', 'Z'},
    {'Q', 'P', 'O'}};

int main()
{

    char black[5];
    cin >> black;

    int cnt = 0;

    int dircet[200] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            dircet[town[i][j]]++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (black[i] == '\0')
            break;
        if (dircet[black[i]] != 0)
            cnt++;
    }

    cout << cnt << "명";

    return 0;
}