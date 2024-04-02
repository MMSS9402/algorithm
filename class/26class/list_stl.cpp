#include <iostream>
#include <list>
using namespace std;

list<int> h;

int main()
{
    // push_back 이 addNode랑 똑같다고 생각하면 됨!
    h.push_back(1);
    h.push_back(2);
    h.push_back(3);

    for (auto i = h.begin(); i != h.end(); ++i)
    {
        cout << *i;
    }

    return 0;
}