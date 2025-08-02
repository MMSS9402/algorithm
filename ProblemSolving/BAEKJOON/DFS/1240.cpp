#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
struct Node{
    int n;
    int price;
};


int n,m;
vector<vector<Node>> v(1001);
int used[1001];
vector<int> result(1001);
void dfs(int now, int tgt, int sum, int idx){
    // cout << "ddd:" << now << " " << tgt;
    if(now == tgt){
        result[idx] = sum;
        
    }
    for(int i=0;i<v[now].size();i++){
        int next = v[now][i].n;
        // cout << next;
        if(used[next] == 1) continue;
        used[next] = 1;
        dfs(next,tgt,sum+v[now][i].price,idx);
    }

    // return -1;

}

void init(){
    for(int i=0;i<1001;i++){
        if(used[i] == 0 ) continue;
        used[i] = 0;
    }
    
}

int main(){
    

    cin >> n >> m;

    for(int i=0;i<n-1;i++){
        int x,y,p;
        cin >> x >> y >> p;
        v[x].push_back({y,p});
        v[y].push_back({x,p});
    }

    for(int i=0;i<m;i++){
        init();
        int a,b;
        cin >> a >> b;
        used[a] = 1;
        dfs(a,b,0,i);
        
    }

    for(int i=0;i<m;i++){
        cout << result[i] << '\n';
    }



    return 0;
}