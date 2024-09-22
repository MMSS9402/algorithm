#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
struct Node
{
    char a;
    char b;
};
int myBoss[200];
Node list[10];

int find(int n)
{
    if (myBoss[n] == 0)
    {
        return n;
    }
    int ret = myBoss[n];
    myBoss[n] = ret;
    return ret;
}

void SetUnion(int a, int b)
{
    int t1 = find(a);
    int t2 = find(b);
    if (t1 == t2)
        return;
    myBoss[t2] = t1;
}

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Node temp;
        cin >> temp.a >> temp.b;
        list[i] = temp;
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int a = list[i].a;
        int b = list[i].b;
        if (find(a) == find(b))
        {
            flag = 1;
            break;
        }
        SetUnion(a, b);
    }
    if (flag)
        cout << "발견";
    else
        cout << "미발견";

    return 0;
}