#include <iostream>
using namespace std;

int myBoss[10001];
int groupPer[10001];
int groupCnt;
int aloneCnt;

int n;


int find(int n){
    if(myBoss[n] == 0){
        return n;
    }
    int ret = find(myBoss[n]);
    myBoss[n] = ret;
    return ret;
}

void setUnion(int a,int b){
    int t1 = find(a);
    int t2 = find(b);
    if(t1 == t2) return;
    myBoss[t2] = t1;
    groupPer[t1] += groupPer[t2];
    groupPer[t2] = 0;
}

void init(){
    for(int i='A';i<'A'+26;i++){
        groupPer[i] = 1;
    }
}

int main(){
    cin >> n;
    init();


    for(int i=0;i<n;i++){
        char a,b;
        cin >> a >> b;
        setUnion(a,b);
        int ret1 = find(a);
        int ret2 = find(b);
        
    }

    for(int i='A';i<'A'+26;i++){
        if(groupPer[i] == 0) continue;
        if(groupPer[i] == 1) aloneCnt++;
        if(groupPer[i] != 1) groupCnt++;
    }
    cout << groupCnt << '\n';
    cout << aloneCnt << '\n';
    

    return 0;
}