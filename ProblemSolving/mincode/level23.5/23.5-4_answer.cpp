#include <iostream>
using namespace std;

int change[10];
int vect[3][4] = {
    3,
    5,
    4,
    1,
    1,
    1,
    2,
    3,
    6,
    7,
    1,
    2,
};

int main()
{
    int input[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> input[i];
    }

    // change Table 완성
    for (int i = 0; i < 10; i++)
    {
        change[i] = i;
    }

    for (int i = 0; i < 3; i++)
    {
        change[input[i]] = input[i + 1];
    }
    change[input[3]] = input[0];

    // 교체하기
    int x, y;
    for (y = 0; y < 3; y++)
    {
        for (x = 0; x < 4; x++)
        {
            int t = vect[y][x];
            vect[y][x] = change[t];
        }
    }

    // 출력
    for (y = 0; y < 3; y++)
    {
        for (x = 0; x < 4; x++)
        {
            cout << vect[y][x] << " ";
        }
        cout << endl;
    }

    return 0;
}