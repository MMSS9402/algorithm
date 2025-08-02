#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n,m;

vector<vector<int>> v(1001);
int used[1001];

void bfs(int start){
    queue<int> q;
    q.push(start);

    while(!q.empty()){
        int now = q.front();
        used[now] = 1;
        q.pop();
        for(int i=0;i<v[now].size();i++){
            int next = v[now][i];
            if(used[next] == 1) continue;
            used[next] = 1;
            q.push(next);

        }
    }
}


int main(){
    cin >> n >> m;

    int cnt = 0;

    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
    for(int i=1;i<=n;i++){
        if(used[i] ==1) continue;
        bfs(i);
        cnt++;
    }
    
    cout << cnt;

    

    return 0;   
}