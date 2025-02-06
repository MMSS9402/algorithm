#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n,m;
long long k;

struct Node{
    int n;
    long long price;
};
int cnt;
vector<vector<Node>> v(100001);

void bfs(int start){
    queue<Node> q;
    q.push({start,0});
    int used[100001] = {0};
    used[start] = 1;
    while(!q.empty()){
        Node now = q.front();
        q.pop();

        for(int i=0;i<v[now.n].size();i++){
            Node next = v[now.n][i];
            if(used[next.n] == 1) continue;
            used[next.n] = 1;
            q.push({next.n,now.price+next.price});
            if(now.price+next.price <= k){
                cnt++;
            }
        }
    }
}



int main(){

    cin >> n >> m >> k;

    for(int i=0;i<m;i++){
        int x,y;
        long long p;
        cin >> x >> y >> p;
        v[x].push_back({y,p});
        v[y].push_back({x,p});
    }
    bfs(1);
    cout << cnt;



    return 0;
}