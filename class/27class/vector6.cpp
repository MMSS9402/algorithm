#include <iostream>
#include <vector>
using namespace std;

vector<int> bts(vector<int> a)
{
    a.push_back(7);
    a.push_back(9);
    return a;
}

int main()
{

    vector<int> v = {1, 3, 5};

    v = bts(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}