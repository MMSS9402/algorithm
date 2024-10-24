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
    return t.n < v.n;
}

priority_queue<Node> q;

int main()
{

    q.push({0, 0});
    q.push({5, 20});
    q.push({2, 20});
    q.push({3, 20});
    q.push({4, 20});

    while (!q.empty())
    {
        cout << q.top().n << endl;
        q.pop();
    }

    return 0;
}