#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Node
{
    int a;
    int b;
};

int main()
{
    vector<Node> v;

    v.push_back({1, 2});
    v.push_back({3, 4});
    v.push_back({5, 6});
    v.push_back({7, 8});

    return 0;
}