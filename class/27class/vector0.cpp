#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 벡터 선언
    vector<int> v = {1, 2, 3, 4};
    // vector<int> v(4); // vector 4칸 만들기
    // vector<int> v(4,10) // 10으로 꽉 채운 vector 4칸 만들기
    // 벡터 사이즈만큼 출력
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }

    // 맨 뒤에 원소 하나 추가
    v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);

    // 맨 뒤 원소 하나 삭제
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }

    return 0;
}