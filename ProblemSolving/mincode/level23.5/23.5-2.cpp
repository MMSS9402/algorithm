#include <iostream>
using namespace std;

char map[3][4];
int arr[3][2];

int main()
{

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        map[arr[i][0]][arr[i][1]] = '#';
    }
    int flag = 1;
    for (int i = 0; i < 3; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 4; j++)
        {
            if (map[i][j] == '#')
            {
                cnt++;
                if (cnt >= 2)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (flag)
        cout << "안전";
    else
        cout << "위험";

    return 0;
}