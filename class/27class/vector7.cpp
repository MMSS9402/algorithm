#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> v;

    v.push_back({1, 3, 2});
    v.push_back({5, 4});
    v.push_back({1, 2, 3, 4});
    v.push_back({5});

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}