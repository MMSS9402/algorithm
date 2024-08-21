#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

queue<int> q;

int main()
{
    q.push(5);
    q.push(4);
    q.push(3);

    int x = 0;

    for (int i = 0; i < 5; i++)
    {
        x = q.front();
        q.pop();
        x = x * 55 + 17 % 11;
        q.push(x);
    }

    return 0;
}