#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int parent[1000001];

int find(int now){
    if(parent[now] == now){
        return now;
    }

    int ret = find(parent[now]);
    parent[now] = ret;
    return ret;
}

void setUnion(int t1, int t2){
    int a = find(t1);
    int b = find(t2);
    if(a==b) return;
    parent[b] = a;
}

int main(){
    int n,m;
    cin >> n >> m;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    for(int i=0;i<=n;i++){
        parent[i] = i;
    }


    for(int i=0;i<m;i++){
        int c,a,b;
        cin >> c >> a >> b;
        if(c == 0 ){
            setUnion(a,b);
        }
        else if(c==1){
            if(find(a)==find(b)){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }


    return 0;
}