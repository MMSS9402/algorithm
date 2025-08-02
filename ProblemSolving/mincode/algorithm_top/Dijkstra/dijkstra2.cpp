#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
const int MAXI = 21e8;
int up[11];
struct Node{
    int n;
    int price;
};
int result[1002];
bool operator<(Node v, Node t){
    return t.price<v.price;
}
vector<vector<Node>> v(1002);
priority_queue<Node> q;

void init(){
    for(int i=0;i<1002;i++){
        result[i] = MAXI;
    }
}

void dijkstra(int st,int upro){
    init();
    q.push({st,0});
    result[st] = 0;

    while(!q.empty()){
        Node now = q.top();
        q.pop();

        if(result[now.n] <now.price) continue;

        for(int i=0;i<v[now.n].size();i++){
            Node next = v[now.n][i];
            int total = next.price + now.price+upro;
            if(result[next.n]>total){
                result[next.n] = total;
                q.push({next.n,total});
            }
        }
    }

}

int main(){

    int n,m,k;
    int a,b;
    cin >> n >> m >> k;
    cin >> a >> b;

    for(int i=0;i<m;i++){
        int x,y,p;
        cin >> x >> y >> p;
        v[x].push_back({y,p});
    }

    

    for(int i=1;i<=k;i++){
        int q;
        cin >> q;
        up[i] = q;
    }

    for(int i=0;i<=k;i++){
        dijkstra(a,up[i]);
        cout << result[b] << '\n';
    }


    return 0;
}