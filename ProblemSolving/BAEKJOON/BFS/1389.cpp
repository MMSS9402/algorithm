#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n,m;

struct Node{
    int n;
    int prcie;
};

vector<vector<int>> v(101);

int used[101];

int result[101];

int mini = 1e9;
int mini_idx = 0;


void bfs(int start){
    queue<Node> q;
    q.push({start,0});

    while(!q.empty()){
        Node now = q.front();
        q.pop();

        for(int i=0;i<v[now.n].size();i++){
            int next = v[now.n][i];
            if(used[next] != -1) continue;
            int total = now.prcie + 1;
            used[next] = total;
            q.push({next,total});
        }
    }


}

void init(){

    for(int i=1;i<=n;i++){
        used[i] = -1;
    }
}

int main(){
    cin >> n >> m;

    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=1;i<=n;i++){
        init();
        used[i] = 0;
        bfs(i);
        int sum = 0;
        for(int j=1;j<=n;j++){
            if(used[j] == -1) continue;
            sum+=used[j];
        }
        result[i] = sum;
        if(mini>sum){
            mini = sum;
            mini_idx = i;
        }
    }
    cout << mini_idx << endl;


    return 0;
}