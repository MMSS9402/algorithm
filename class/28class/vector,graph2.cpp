#include <iostream>
#include <vector>
#include <string>
using namespace std;

char name[6] = "DUSRK";

vector< vector<int> > alist(5);

int main(){

    alist[0] = {1,3,4};
    alist[1] = {2,3};
    alist[2] = {};
    alist[3] = {2,4};
    alist[4] = {1,3};

    //노드 번호 입력
    //갈 수 있는 곳의 노드 값을 출력

    int n;
    cin >> n;

    for(int i=0;i<alist[n].size();i++){
        cout << alist[n][i];
    }



    return 0;
}