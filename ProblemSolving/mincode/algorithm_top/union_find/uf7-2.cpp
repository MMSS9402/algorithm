#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

// unordered_map<int,int> um;

int parent[100001];


int Find(int n){
    if(parent[n] == n){
        return n;
    }
    int ret = Find(parent[n]);
    parent[n] = ret;
    return ret;
}

void setUnion(int a,int b){
    int t1 = Find(a);
    int t2 = Find(b);
    if(t1 == t2) return;
    parent[t2]=t1;
}

int main(){

    int t,n;
    cin >> t;
    cin >> n;
    for(int i=1;i<=t;i++){
        parent[i] = i;
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        int temp = Find(x);
        if(temp == 0){
            break;
        }
        cnt++;
        setUnion(temp-1,x);
    }

    cout << cnt;


    return 0;
}