#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v(6, 7);

    v[0] = 1;
    v[5] = 1;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}