
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int MyBoss[10];
int groupCnt[10];
int isNew[10];
int totalPersonCnt;
int makeGroupCnt;

int find(int now){
    if(MyBoss[now] == 0){
        return now;
    }
    int ret = MyBoss[now];
    MyBoss[now] = ret;
    return ret;
}
void SetBoss(int t1, int t2){
    if(isNew[t1] == 0){
        totalPersonCnt++;
        isNew[t1] = 1;
    }
    if(isNew[t2] == 0){
        totalPersonCnt++;
        isNew[t2] = 1;
    }
    int a = find(t1);
    int b = find(t2);
    if(a==b) return;
    MyBoss[b] = a;
    // groupCnt[a] += groupCnt[b];
    // groupCnt[b] = 0;
    makeGroupCnt++;
}   


int main(){
    for(int i=0;i<10;i++) groupCnt[i] = 1;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        SetBoss(a,b);
    }
    cout << totalPersonCnt << "명" << endl;
    cout << totalPersonCnt- makeGroupCnt << "개" << endl;


    return 0;
}
// 5
// 1 3
// 4 2
// 9 5
// 1 3
// 1 9