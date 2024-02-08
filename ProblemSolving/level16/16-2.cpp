#include <iostream>

using namespace std;

int main()
{
    char arr[4][4] = {
        {'A', 'B', 'K', 'T'},
        {'K', 'F', 'C', 'F'},
        {'B', 'B', 'Q', 'Q'},
        {'T', 'P', 'Z', 'F'}

    };

    char x, y;

    cin >> x;
    cin >> y;

    int x_count = 0;
    int y_count = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == x)
            {
                x_count++;
            }
            if (arr[i][j] == y)
            {
                y_count++;
            }
        }
    }
    int count = x_count + y_count;
    cout << count;

    return 0;
}