#include <iostream>
using namespace std;

int main()
{
    int input[4][2];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> input[i][j];
        }
    }
    int vect[4][3] = {0};

    for (int t = 0; t < 4; t++)
    {
        int dx = input[t][0];
        int dy = input[t][1];
        vect[dx][dy] = 5;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}