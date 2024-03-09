#include <iostream>
using namespace std;

int main()
{
    int input[4];
    int map[4][4];
    int result[4][4] = {0};

    // 입력
    for (int i = 0; i < 4; i++)
    {
        cin >> input[i];
    }

    // 1~16 값 채우기
    int t = 1;
    int x, y;
    for (y = 0; y < 4; y++)
    {
        for (x = 0; x < 4; x++)
        {
            map[y][x] = t;
            t++;
        }
    }

    // result 채우기
    int flag;
    for (t = 0; t < 4; t++)
    {
        flag = 0;
        for (y = 0; y < 4; y++)
        {
            for (x = 0; x < 4; x++)
            {
                if (map[y][x] == input[t])
                {
                    result[y][x] = t + 1;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                break;
        }
    }

    // 출력
    for (y = 0; y < 4; y++)
    {
        for (x = 0; x < 4; x++)
        {
            cout << result[y][x] << " ";
        }
        cout << endl;
    }

    return 0;
}