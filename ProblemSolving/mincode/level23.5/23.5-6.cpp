#include <iostream>
using namespace std;

char arr1[4][4];
char arr2[4][4] = {
    'A',
    'B',
    'C',
    'D',
    'B',
    'B',
    'A',
    'B',
    'C',
    'B',
    'A',
    'C',
    'B',
    'A',
    'A',
    'A',
};

int dat[200];

int main()
{

    for (int i = 0; i < 4; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                dat[arr1[i][j]]++;
            }
        }
    }
    char a;
    int max = -1;
    for (int i = 0; i < 200; i++)
    {
        if (dat[i] > max)
        {
            a = i;
            max = dat[i];
        }
    }

    cout << a;
}