#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int n;
int m;
vector<vector<int>> v(100001);
int cnt;
void bfs(int start){
    queue<int> q;
    q.push(start);
    int used[100001] ={0};
    used[start] = 1;
    
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


int main(){
    
    cin >> n;
    cin >> m;

    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);

    }
    int coco;
    cin >> coco;
    bfs(coco);

    cout << cnt;

    return 0;
}