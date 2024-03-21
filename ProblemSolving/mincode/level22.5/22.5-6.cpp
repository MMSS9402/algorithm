#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char vect[4][10];

    for (int i = 0; i < 4; i++)
    {
        cin >> vect[i];
    }

    int x, y;
    for (x = 0; x < 4; x++)
    {
        for (y = x + 1; y < 4; y++)
        {
            int a = strlen(vect[x]);
            int b = strlen(vect[y]);
            char temp[10];
            if (a > b)
            {
                strcpy(temp, vect[x]);
                strcpy(vect[x], vect[y]);
                strcpy(vect[y], temp);
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << vect[i] << endl;
    }
    return 0;
}