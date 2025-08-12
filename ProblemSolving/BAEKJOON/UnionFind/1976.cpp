#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int parent[201];

int map[201][201];

int plan[1001];

int find(int now){
    if(parent[now] == now){
        return now;
    }
    int ret = find(parent[now]);
    parent[now] = ret;
    return ret;
}

void setUnion(int t1,int t2){
    int a = find(t1);
    int b = find(t2);
    if(a==b) return;
    parent[b] = a;
}

int main(){
    int n;
    cin >> n;

    int m;
    cin >> m;

    for(int i=0;i<=n;i++){
        parent[i] = i;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(map[i][j] == 0) continue;
            setUnion(i+1,j+1);
        }
    }


    for(int i=0;i<m;i++){
        cin >> plan[i];
    }


    for(int i=0;i<m-1;i++){
        if(find(plan[i]) != find(plan[i+1])){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    


    return 0;
}