#include <iostream>
using namespace std;

int map[3][4] = {
    3, 5, 4, 1,
    1, 1, 2, 3,
    6, 7, 1, 2};

int main()
{
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (map[i][j] == arr[0])
            {
                map[i][j] = arr[1];
            }
            else if (map[i][j] == arr[1])
            {
                map[i][j] = arr[2];
            }
            else if (map[i][j] == arr[2])
            {
                map[i][j] = arr[3];
            }
            else if (map[i][j] == arr[3])
            {
                map[i][j] = arr[0];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}