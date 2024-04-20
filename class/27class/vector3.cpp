#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    char x = 'A';
    vector<char> v(a);
    for (int i = v.size() - 1; i >= v.size() - b; i--)
    {
        v[i] = x;
        x += 1;
    }

    // v.push_back('B');
    // v.push_back('C');
    // v.push_back('D');
    // v.push_back('E');

    for (int i = 1; i < b; i++)
    {
        v.push_back('A' + i);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}