#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int MyBoss[10];
int groupCnt[10];
int find(int now)
{
    if (MyBoss[now] == 0)
    {
        return now;
    }
    int ret = MyBoss[now];
    MyBoss[now] = ret;
    return ret;
}
void SetBoss(int t1, int t2)
{
    int a = find(t1);
    int b = find(t2);
    if (a == b)
        return;
    MyBoss[b] = a;
    groupCnt[a] += groupCnt[b];
    groupCnt[b] = 0;
}
int getCount(int a)
{
    int t = find(a);
    return groupCnt[t];
}

int main()
{
    for (int i = 0; i < 10; i++)
        groupCnt[i] = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        SetBoss(a, b);
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        cout << getCount(x) << "개" << endl;
    }

    return 0;
}
// 5
// 1 3
// 4 2
// 9 5
// 1 3
// 1 9
// 3
// 1 2 9