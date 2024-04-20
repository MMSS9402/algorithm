#include <iostream>
#include <vector>
using namespace std;

vector<int> bts(vector<int> a)
{

    return {9, 9, 8};
}

int main()
{

    vector<int> a = {1, 2, 3, 4, 5};

    // bts 함수 파라미터로 vector a가 복사됨
    vector<int> ret = bts(a);

    return 0;
}