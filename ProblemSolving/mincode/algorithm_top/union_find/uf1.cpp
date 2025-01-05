#include <iostream>
using namespace std;
int myBoss[1001];

int find(int n)
{
    if (myBoss[n] == 0)
        return n;

    int ret = find(myBoss[n]);
    myBoss[n] = ret;
    return ret;
}

void setBoss(int a, int b)
{
    int t1 = find(a);
    int t2 = find(b);
    if (t1 == t2)
        return;
    myBoss[t2] = t1;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n, q;

    cin >> n >> q;

    for (int i = 0; i < q; i++)
    {
        int c, x, y;
        cin >> c >> x >> y;
        if (c == 1)
            setBoss(x, y);
        if (c == 0)
        {
            int ret1 = find(x);
            int ret2 = find(y);
            if (ret1 == ret2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    // cout << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << myBoss[i] << " ";
    // }

    return 0;
}