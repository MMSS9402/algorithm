#include <iostream>
#include <vector>
#include <string>

using namespace std;

int map[6][6] = {
    0,
    2,
    6,
    3,
    0,
    0,
    2,
    0,
    7,
    4,
    0,
    0,
    6,
    7,
    0,
    0,
    0,
    0,
    3,
    4,
    2,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    7,
    0,
    0,
    0,
    0,
    0,
    0,
};
int used[6];

void run1(int now)
{
    cout << now << " ";
    for (int i = 0; i < 6; i++)
    {
        if (map[now][i] == 0)
            continue;
        if (used[i] == 1)
            continue;
        used[i] = 1;
        run1(i);
        used[i] = 0;
    }
}

void run2(int now)
{
    cout << now << " ";
    for (int i = 0; i < 6; i++)
    {
        if (map[now][i] == 0)
            continue;
        if (used[i] == 1)
            continue;
        int next = i;
        used[next] = 1;
        run2(next);
    }
}

int main()
{
    run1(4); // 모든 경로 1회 탐색(4에서 시작)
    cout << endl;
    run2(4); // 모든 노드 1회 탐색(4에서 시작)
    return 0;
}