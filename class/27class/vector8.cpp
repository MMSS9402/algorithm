#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> v;

    v.push_back({0, 0, 0, 0});
    v.push_back({0, 0, 1, 0});
    v.push_back({0, 2, 3, 0});
    v.push_back({0, 0, 0, 0});

    vector<vector<int>> g(4);
    for (int i = 0; i < 4; i++)
    {
        g[i] = {0, 0, 0, 0};
    }

    return 0;
}