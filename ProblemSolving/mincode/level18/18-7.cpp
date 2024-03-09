#include <iostream>
using namespace std;

char alphabet[5][3] = {
    {'A', 'B', 'C'},
    {'A', 'G', 'H'},
    {'H', 'I', 'J'},
    {'K', 'A', 'B'},
    {'A', 'B', 'C'}};

int main()
{

    int direct[200] = {0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            direct[alphabet[i][j]]++;
        }
    }

    for (int i = 0; i < 200; i++)
    {
        if (direct[i] != 0 && direct[i] != '\0')
        {
            for (int j = 0; j < direct[i]; j++)
            {
                cout << char(i);
            }
        }
    }

    return 0;
}