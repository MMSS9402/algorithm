#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int result[10001];
int cnt = 0;
int n,m;
int used[10001];
int maxi = 0;
int maxi_idx = 0;

vector<vector<int>> v(10001);
void bfs(int start){
    queue<int> q;
    q.push(start);

    while(!q.empty()){
        int now = q.front();
        q.pop();

        for(int i=0;i<v[now].size();i++){
            int next = v[now][i];
            if(used[next] == 1) continue;
            used[next] = 1;
            cnt++;
            q.push(next);

        }
    }
}

void init(){
    for(int i=1;i<=n; i++){
        used[i] = 0;
    }
}


int main(){

    cin >> n >> m;

    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        // v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=1;i<=n;i++){
        cnt = 0;
        init();
        used[i] = 1;
        bfs(i);
        result[i] = cnt;
        if(cnt >maxi){
            maxi = cnt;
        }

    }

    for(int i=1;i<=n;i++){
        if(result[i] == maxi){
            cout << i << " ";
        }
    }


    

    return 0;
}