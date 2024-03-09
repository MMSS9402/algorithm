#include <iostream>
using namespace std;

struct sketchbook
{
    char image[3][3];
};

int main()
{

    sketchbook a;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a.image[i][j];
        }
    }

    int DAT[200] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            DAT[a.image[i][j]]++;
        }
    }

    for (int i = 0; i < 200; i++)
    {
        if (i == '\0' || DAT[i] == 0)
            continue;
        else
            cout << char(i);
    }

    return 0;
}