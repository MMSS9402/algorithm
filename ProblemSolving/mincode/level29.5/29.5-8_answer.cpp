#include <iostream>
using namespace std;

char vect[4][4];

struct Node
{
    char ch;
    int x, y;
};

Node player[20];
int n;

int main()
{

    for (int i = 0; i < 4; i++)
    {
        cin >> vect[i];
    }

    // 1. Player 위치 등록하기 (문자 순서대로)
    int x, y;
    char alpa;
    for (alpa = 'A'; alpa <= 'Z'; alpa++)
    {

        for (y = 0; y < 4; y++)
        {
            for (x = 0; x < 3; x++)
            {
                if (vect[y][x] == alpa)
                {
                    player[n++] = {alpa, x, y};
                }
            }
        }
    }

    // 2. 5초간 Player를 순서대로 이동시키기
    int direct[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
    int dx, dy, t;
    int bang;

    for (int i = 0; i < 5; i++)
    { // 5초
        bang = i % 4;

        for (t = 0; t < n; t++)
        { // 각 플레이어마다
            dy = player[t].y + direct[bang][0];
            dx = player[t].x + direct[bang][1];

            if (dy < 0 || dx < 0 || dy >= 4 || dx >= 3)
                continue;
            if (vect[dy][dx] == '_')
            {

                vect[dy][dx] = player[t].ch;          // 맵에 플레이어를 기록
                vect[player[t].y][player[t].x] = '_'; // 플레이어 이전 흔적 지우기
                player[t].y = dy;
                player[t].x = dx;
            }
        }
    }

    for (y = 0; y < 4; y++)
    {
        cout << vect[y] << endl;
    }

    return 0;
}