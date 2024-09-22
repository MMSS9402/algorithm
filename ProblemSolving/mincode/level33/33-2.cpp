#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int myBoss[200];
int isNew[200];
int totalCnt;
int GroupCnt;
struct Node
{
    char a, b;
};
Node list[10];

int find(int n)
{
    if (myBoss[n] == 0)
        return n;
    return myBoss[n] = find(myBoss[n]);
}

void SetUnion(int a, int b)
{
    if (isNew[a] == 0)
    {
        totalCnt++;
        isNew[a] = 1;
    }
    if (isNew[b] == 0)
    {
        totalCnt++;
        isNew[b] = 1;
    }
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
    SetUnion('A', 'B');
    SetUnion('A', 'C');
    SetUnion('D', 'E');
    SetUnion('D', 'F');
    SetUnion('I', 'J');
    SetUnion('G', 'H');
    for (int i = 0; i < n; i++)
    {
        Node temp;
        cin >> temp.a >> temp.b;
        list[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        char a = list[i].a;
        char b = list[i].b;
        // cout << char(a) << char(b) << char(find(a)) << char(find(b)) << endl;
        if (find(a) == find(b))
            continue;
        SetUnion(a, b);
        GroupCnt++;
    }

    cout << 4 - GroupCnt << "개";

    return 0;
}