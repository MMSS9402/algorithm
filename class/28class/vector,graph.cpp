#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    vector<int> v = {4, 2, 5, 9};

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}