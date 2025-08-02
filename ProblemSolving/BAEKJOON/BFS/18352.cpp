#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int used[300002];

struct Node{
    int a;
    int price;
};

int n,m,k,x;
vector<vector<int>> v(300002);
vector<int> result;

void bfs(int start){
    queue<Node> q;
    q.push({start,0});

    while(!q.empty()){
        Node now = q.front();
        q.pop();
        if(now.price == k) result.push_back(now.a);
        for(int i=0;i<v[now.a].size();i++){
            int next = v[now.a][i];
            if(used[next] == 1) continue;
            used[next] = 1;
            q.push({next,now.price+1});
        }
    }
}

int main(){
    cin >> n >> m >> k >> x;

    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        // v[b].push_back(a);
    }

    used[x] = 1;
    bfs(x);
    if(result.size() == 0) {
        cout << -1 << endl;
        return 0;
    }
    sort(result.begin(),result.end());

    for(int i=0;i<result.size();i++){
        cout << result[i] << '\n';
    }


    return 0;
}