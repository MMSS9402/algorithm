#include <iostream>
using namespace std;

int myBoss[10];

int find(int n)
{
    // 재귀, while
    if (myBoss[n] == 0)
        return n;

    int ret = find(myBoss[n]);

    return ret;
}

void setBoss(int t1, int t2)
{
    // myBoss[t2] = t1; // 이렇게 하면 안됨
    //  t2의 보스가 t1의 보스 밑으로 들어가게 해야하기 때문

    int a = find(t1);
    int b = find(t2);
    if (a == b)
    {
        return;
    }
    myBoss[b] = a;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    setBoss(6, 7);
    setBoss(5, 6);
    setBoss(1, 2);

    if (find(2) == find(6))
    {
        cout << "같은그룹\n";
    }
    else
    {
        cout << "다른그룹";
    }

    return 0;
}