#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
// #define MAX 21e8 // c언어 스타일
using namespace std;
struct Node
{
    int n;
    int price;
};
vector<vector<Node>> alist(4);
const int MAXI = 21e8; // c++ 스타일
int result[4] = {0, MAXI, MAXI, MAXI};

bool operator<(Node v, Node t)
{
    return t.price < v.price;
}

priority_queue<Node> q;

int main()
{
    alist[0] = {{2, 20}, {1, 5}, {3, 30}};
    alist[1] = {{2, 10}, {3, 35}};
    alist[2] = {{3, 20}};
    alist[3] = {};

    q.push({0, 0});

    while (!q.empty())
    {
        Node now = q.top();
        q.pop();

        // 1. 최신데이터가 맞는가?
        if (result[now.n] < now.price)
            continue;

        // 2. 큐 등록
        for (int i = 0; i < alist[now.n].size(); i++)
        {
            Node next = alist[now.n][i];
            int total = now.price + next.price;

            if (result[next.n] > total)
            {
                result[next.n] = total;
                q.push({next.n, total});
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}