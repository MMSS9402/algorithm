#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
struct Node
{
    int n;
    int price;
};
bool operator<(Node v, Node t)
{
    return t.price < v.price;
}
const int MAXI = 21e8;
int result[20000];
vector<vector<Node>> v(20000);
priority_queue<Node> q;

void init()
{
    for (int i = 0; i < 20000; i++)
    {
        result[i] = MAXI;
    }
}

int main()
{
    init();
    int n, t;
    cin >> n >> t;

    for (int i = 0; i < t; i++)
    {
        int x, y, price;
        cin >> x >> y >> price;
        v[x].push_back({y, price});
    }
    q.push({0, 0});

    while (!q.empty())
    {
        Node now = q.top();
        q.pop();
        if (result[now.n] < now.price)
            continue;
        for (int i = 0; i < v[now.n].size(); i++)
        {
            Node next = v[now.n][i];
            int total = next.price + now.price;
            if (result[next.n] > total)
            {
                result[next.n] = total;
                q.push({next.n, total});
            }
        }
    }
    if (result[n - 1] != 21e8)
    {
        cout << result[n - 1];
    }
    else
    {
        cout << "impossible";
    }

    return 0;
}