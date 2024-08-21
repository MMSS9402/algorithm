#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int main()
{
    q.push(1);
    q.push(2);
    q.push(5);
    q.push(7);

    // cout << q.front();
    // q.pop();
    // q.pop();
    // cout << q.front();

    // for문 돌려서 아래와 같이 돌리면 출력이 안됨!
    // 왜? => 하나 제거할 때마다 q 사이즈가 달라져서 이상해짐
    // for (int i = 0; i < q.size(); i++)
    // {
    //     cout << q.front();
    //     q.pop();
    // }

    // 방법 1.
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        cout << q.front();
        q.pop();
    }

    // 방법 2
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }

    return 0;
}