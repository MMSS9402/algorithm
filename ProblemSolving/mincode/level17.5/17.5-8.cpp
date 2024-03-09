#include <iostream>
using namespace std;

int map[2][3] = {
    3, 55, 42,
    -5, -9, -10};

char isExist(int a)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (map[i][j] == a)
            {
                return 'Y';
            }
        }
    }
    return 'N';
}

int main()
{

    int pix[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> pix[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << isExist(pix[i][j]) << " ";
        }
        cout << endl;
    }

        return 0;
}