#include <iostream>
#include <string>
#include <vector>
using namespace std;

int map[3][4] = {
    3, 2, 5, 3,
    7, 6, 1, 6,
    4, 9, 2, 7};

void rotation(vector<int> &v, int a)
{
    for (int i = 0; i < a; i++)
    {
        v.insert(v.begin(), v[v.size() - 1]);
        v.pop_back();
    }
}

int main()
{

    int cnt[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> cnt[i];
    }

    vector<vector<int>> v(4);
    int k = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            v[k].push_back(map[j][i]);
        }
        k++;
    }

    for (int i = 0; i < 4; i++)
    {
        rotation(v[i], cnt[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << v[j][i];
        }
        cout << endl;
    }

    return 0;
}