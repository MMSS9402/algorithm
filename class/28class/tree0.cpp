#include <iostream>
#include <string>
#include <vector>
using namespace std;

string name = "ABTQVX";
int map[6][6] ={
    0,1,1,1,0,0,
    0,0,0,0,1,1,
    0,0,0,0,0,0,
    0,0,0,0,0,0,
    0,0,0,0,0,0,
    0,0,0,0,0,0,
};


int main(){

    // 특정 노드 번호를 입력 받았을 때,
    // 자식 노드의 이름을 출력하는 코드를 짜자!

    int n;
    cin >> n;

    for(int i=0;i<6;i++){
        if(map[n][i]==1) cout << name[i];
    }

    return 0;
}
