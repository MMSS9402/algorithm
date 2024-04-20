#include <iostream>
#include <string>
#include <vector>
using namespace std;

void goSwap(int &a, int &b)
{

    int temp = a;
    a = b;
    b = temp;
}

void bts(vector<int> &v)
{
    v[0] = 100;
}

int main()
{

    int a = 5;
    int b = 7;
    goSwap(a, b);
    cout << a << " " << b;

    vector<int> v = {1, 2};
    bts(v);
    return 0;
}