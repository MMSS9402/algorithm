#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node{
    int n;
    int price;
};

const int MAXI = 21e8;

vector<vector<int>> v(11);
int used[11];
int cnt = 0;

int result[11];

void bfs(int st,int tgt){
    queue<Node> q;
    q.push({st,0});
    used[st] = 1;
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        for(int i=0;i<v[now.n].size();i++){
            int next = v[now.n][i];
            if(used[next] == 1)continue;
            used[next] = 1;
            q.push({next, now.price+1});
            if(result[next]>now.price+1){
                result[next] = now.price+1;
            }
            
        }

    }
    
}
void init(){
    for(int i=0;i<11;i++){
        result[i] = MAXI;
    }
}

int main(){
    init();
    int n,m;
    cin >> n >> m;

    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int r,k;
    cin >> r >> k;

    result[r] = 0;

    bfs(r,k);

    for(int i=1;i<=n;i++){
        // cout << result[i] << " ";
        if(result[i]<=k){
            
            cnt++;
        }
    }
    cout << cnt;


    return 0;   
}