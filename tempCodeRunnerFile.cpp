#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int n,m,k;

struct Node{
    int n;
    int price;
};
vector<vector<Node>> v(11);
int used[11];


queue<Node> q;
void bfs(int start){
    used[start] = 1;
    q.push({start,0});

    while(!q.empty()){
        Node now = q.front();
        q.pop();

        if(now.price<=k){
            cout << now.n << " ";
        }

        for(int i=0;i<v[now.n].size();i++){
            Node next = v[now.n][i];
            if(used[i] == 1) continue;
            used[i] = 1;
            q.push({next,now.price+next.price});
        }
    }
}



int main(){
    cin >> n >> m >> k;

    for(int i=0;i<m;i++){
        int a,b,price;
        cin >> a >> b >> price;
        v[a].push_back({b,price});
    }
    bfs(0);

    return 0;
}