#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node
{
    int n;
    int price;
};

vector<vector<Node>> m(4);
int used[4];

void run(int now, int sum)
{
    if (now == 2)
    {
        cout << sum << " ";
        return;
    }

    for (int i = 0; i < m[now].size(); i++)
    {
        Node next = m[now][i]; // next에는 다음 갈 곳의 정보가 담겨있는 구조체 변수
        if (used[next.n] == 1)
            continue;
        used[next.n] = 1;
        run(next.n, sum + next.price);
        used[next.n] = 0;
    }
}

int main()
{
    m[0] = {{1, 5}, {3, 8}};
    m[1] = {{2, 6}};
    m[3] = {{1, 7}, {2, 9}};

    run(0, 0);

    return 0;
}