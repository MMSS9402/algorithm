#include <iostream>
#include <queue>
#include <vector>
#include <string>
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
vector<vector<Node>> v(1000);
int result[1000];
priority_queue<Node> q;

void init()
{
    for (int i = 0; i < 1000; i++)
    {
        result[i] = MAXI;
    }
}

int main()
{
    init();
    int n, m, k;
    cin >> n >> m >> k;
    int A, B;
    cin >> A >> B;
    q.push({A - 1, 0});
    for (int i = 0; i < m; i++)
    {
        int x, n, price;
        cin >> x >> n >> price;
        v[x - 1].push_back({n - 1, price});
        v[n - 1].push_back({x - 1, price});
    }
    while (!q.empty())
    {
        Node now = q.top();
        q.pop();
        if (result[now.n] < now.price)
            continue;
        for (int j = 0; j < v[now.n].size(); j++)
        {
            Node next = v[now.n][j];
            int total = next.price + now.price;
            if (result[next.n] > total)
            {
                result[next.n] = total;
                q.push({next.n, total});
            }
        }
    }
    cout << result[B - 1] << endl;

    for (int i = 0; i < k; i++)
    {
        init();
        q.push({A - 1, 0});
        int x;
        cin >> x;
        for (int j = 0; j < v.size(); j++)
        {
            for (int k = 0; k < v[j].size(); k++)
            {
                v[j][k].price += x;
            }
        }
        while (!q.empty())
        {
            Node now = q.top();
            q.pop();
            if (result[now.n] < now.price)
                continue;
            for (int j = 0; j < v[now.n].size(); j++)
            {
                Node next = v[now.n][j];
                int total = next.price + now.price;
                if (result[next.n] > total)
                {
                    result[next.n] = total;
                    q.push({next.n, total});
                }
            }
        }
        cout << result[B - 1] << endl;
    }

    return 0;
}