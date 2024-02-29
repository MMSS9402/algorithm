#include <iostream>
using namespace std;

int main()
{

    char arr[6][3];

    int k = 65;

    for (int i = 2; i >= 0; i--)
    {
        for (int j = 5; j >= 0; j--)
        {
            arr[j][i] = char(k);
            k++;
        }
    }

    int x, y;
    cin >> x >> y;

    cout << arr[x][y];

    return 0;
}