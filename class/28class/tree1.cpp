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

void run(int now){// now는 현재 탐색 중인 노드번호!
    cout << now;
    for(int i=0;i<6;i++){
        if(map[now][i]==0) continue;
        run(i);
    }
}


int main(){
    run(0);
    return 0;
}
