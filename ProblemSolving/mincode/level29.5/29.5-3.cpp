#include <iostream>
#include <vector>
#include <string>
using namespace std;

int map[3][3];

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int flag = 1;
        for (int j = 0; j < 3; j++)
        {
            if (map[i][0] != map[i][j])
            {
                flag = 0;
            }
        }
        if (flag)
        {
            cout << map[i][0] << endl;
        }
        else
        {
            cout << "x" << endl;
        }
    }
    return 0;
}