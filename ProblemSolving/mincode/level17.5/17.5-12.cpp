#include <iostream>
using namespace std;

int main()
{

    char map[5][5];
    int k = 65;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            map[i][j] = char(k);
            k++;
        }
    }

    char a;
    cin >> a;
    int x = 0;
    int y = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (map[i][j] == a)
            {
                x = i - 2;
                y = j - 2;
            }
        }
    }
    cout << x << "," << y;

    return 0;
}