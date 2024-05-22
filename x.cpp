#include <iostream>
#include <string>
#include <vector>
using namespace std;

char line[50] = {0, 'K', 'G', 'Z', 'H', 'I', 0, 'R'};

string name = "KGZHIR";

vector<vector<int>> alist(6);

int map[6][6] = {
    0,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
};

void run3(int now)
{
    if (line[now] == 0)
        return;
    cout << line[now];
    run3(now * 2);
    run3(now * 2 + 1);
}

void run(int now)
{
    cout << name[now];
    for (int i = 0; i < 6; i++)
    {
        if (map[now][i] == 0)
            continue;
        run(i);
    }
}

void run2(int now)
{
    cout << name[now];
    for (int i = 0; i < alist[now].size(); i++)
    {
        int next = alist[now][i];
        run2(next);
    }
}

int main()
{
    alist[0] = {1, 2};
    alist[1] = {3, 4};
    alist[2] = {5};
    run(0);
    cout << endl;
    run2(0);
    cout << endl;
    run3(1);
    cout << endl;
    return 0;
}