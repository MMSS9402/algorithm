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
vector<vector<Node>> v(11);
vector<int> result;
int n,m,k;

void bfs(int start){
    int used[11] = {0};
    used[start] = 1;
    queue<Node> q;
    q.push({start,0});

    while(!q.empty()){
        Node now = q.front();
        q.pop();

        for(int i=0;i<v[now.n].size();i++){
            Node next = v[now.n][i];
            if(used[next.n] == 1) continue;
            used[next.n] = 1;
            q.push({next.n,now.price+next.price});
            if(now.price+next.price<=k){
                result.push_back(next.n);
            }
        }
    }
    

}

int main(){
    cin >> n >> m >> k;

    for(int i=0;i<m;i++){
        int x,y,p;
        cin >> x >> y >> p;
        v[x].push_back({y,p});
        v[y].push_back({x,p});
        
    }

    bfs(0);

    sort(result.begin(),result.end());

    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }


    return 0;
}