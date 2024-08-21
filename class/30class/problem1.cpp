#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
    char ch;
    int n;
};

queue<Node> q;

int main()
{

    q.push({'A', 9});
    q.push({'B', 7});
    q.push({'Q', 5});
    q.push({'T', 4});

    while (!q.empty())
    {

        Node ret = q.front();
        cout << ret.ch << " " << ret.n << "\n";
        // q.front()가 구조체 덩어리를 의미함!
        cout << q.front().ch;
        q.pop();
    }

    return 0;
}