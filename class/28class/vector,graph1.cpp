#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> alist(4);


int main()
{

    // alist[1].push_back(0);
    // alist[1].push_back(3);
    // alist[2].push_back(1);
    // alist[2].push_back(3);

    // 벡터의 벡터가 있으면 인접행렬보다 인접리스트가 훨씬 편함!
    // 인접행렬은 메모리 낭비가 심함
    // 노드가 조금 연결되어있어도 무조건 2차원배열을 만들어야 함!
    // 인접리스트는 연결되어 있는 것만 적으면 됨!
    // 심지어 탐색속도도 빠름!

    // 인접리스트를 더 많이 쓰지만 인접행렬도 알아둬야 함!
    // 입력 데이터에 따라서 인접행렬이 더 편한 경우도 있기 때문!
    
    alist[1] = {0,3};
    alist[2] = {1,3};

    return 0;
}