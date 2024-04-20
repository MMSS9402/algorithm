#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    vector<int> v(a + b, a * b);

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    return 0;
}