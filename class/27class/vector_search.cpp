#include <vector>
#include <iostream>
using namespace std;

int main()
{

    vector<int> q = {1, 2, 3, 4, 5};

    vector<int>::iterator i;

    // i = q.begin();
    // i++;
    // i = q.end(); // 맨 마지막 다음 칸을 가리킴

    // 여기서 auto는 vector<int>::iterator
    // i++ 보다 ++i가 더 빠름(STL에서만!!)
    for (auto i = q.begin(); i != q.end(); ++i)
    {
    }

    // STL 공용으로 쓰는 탐색방법
    // q.begin()하면 배열 맨 앞에 포인터가 저장됨!
    //
    for (auto i = q.begin(); i != q.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    // vector에서 가능한 탐색방법
    for (int i = 0; i < q.size(); i++)
    {
        cout << q[i] << " ";
    }

    return 0;
}