#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int flag = 0;
vector<vector<int>> v(102);
int coco;
int man;
int used[102];

void bfs(int st){
    // cout << "moon start bfs from " << st << endl;
    queue<int> q;
    q.push(st);
    used[st] = 1;

    while(!q.empty()){
        int now = q.front();
        q.pop();
        if(now == man) {
            flag = 1;
            break;
        }
        
        for(int i=0;i<v[now].size();i++){
            int next = v[now][i];
            if(used[next] == 1) continue;
            used[next] = 1;
            q.push(next);

        }
    }

}

int main(){

    int n;
    cin >> n;
    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    cin >> coco;
    cin >> man;
    
    bfs(coco);

    if(flag) cout << "YES";
    else cout << "NO";


    return 0;
}