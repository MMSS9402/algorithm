#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int myBoss[10];

int find(int n){
    //재귀 혹은 while로 구현하면 됨!
    //재귀가 최적화에 유리하긴 함
    if(myBoss[n] == 0){
        return n;
    }

    int ret = find(myBoss[n]);
    // 돌아오면서 최종 보스 값으로 수정 => 성능 향상!(경로압축이라고 부름!)
    myBoss[n] = ret;
    return ret;
}

//Union 구현(t2가 t1 밑으로 들어가도록)
void setBoss(int t1, int t2){
    int a = find(t1);
    int b = find(t2);
    if(a==b) return;
    myBoss[b] = a;
}

int main(){

    setBoss(6,7);
    setBoss(5,6);
    setBoss(1,2);

    // int ret = find(7);
    //2번과 6번이 같은 그룹인지... 검사!
    if(find(5)==find(6)){
        cout<<"같은그룹";
    }
    else cout << "다른그룹";


    return 0;
}