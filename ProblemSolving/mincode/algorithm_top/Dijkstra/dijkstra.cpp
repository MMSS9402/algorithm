#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
const int MAXI = 21e8;
int result[20001];
struct Node{
    int n;
    int price;
};
vector<vector<Node>> v(20001);

bool operator<(Node v, Node t){
    return t.price<v.price;
}

priority_queue<Node> q;

void dijkstra(int st){
    q.push({st,0});

    while(!q.empty()){
        Node now = q.top();
        q.pop();
        if(result[now.n] < now.price) continue;
        
        for(int i=0;i<v[now.n].size();i++){
            Node next = v[now.n][i];
            if(result[next.n] >= now.price+next.price){
                result[next.n] = now.price + next.price;
                q.push({next.n,now.price+next.price});
            }
        }

    }

}


int main(){

    int n,t;
    cin >> n >> t;

    for(int i=0;i<=n;i++){
        result[i] = MAXI;
    }

    for(int i=0;i<t;i++){
        int a,b,p;
        cin >> a >> b >> p;
        v[a].push_back({b,p});
    }


    dijkstra(0);

    int tgt = result[n-1];
    if(tgt == MAXI){
        cout << "impossible";
    }
    else{
        cout << tgt;
    }
        
    return 0;
}