#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n,e;
const int MAXI = 21e8;
int used[801];
int result[801];
struct Node{
    int n;
    int price;
};
bool operator<(Node v, Node t){
    return t.price<v.price;
}

void init(int node){
    for(int i=1;i<=node;i++){
        result[i] = MAXI;
    }
}
vector<vector<Node>> v(801);

void dijkstra(int start,int t1, int t2){
    priority_queue<Node> q;
    q.push({start,0});
    result[start] = 0;
    used[start] = 1;

    while(!q.empty()){
        Node now = q.top();
        q.pop();
        if(now.n == n && result[now.n]<now.price && (used[t1]!=1 || used[t2]!=1)) continue;
        else if(result[now.n]<now.price) continue;

        for(int i=0;i<v[now.n].size();i++){
            Node next = v[now.n][i];
            int total = now.price + next.price;
            if(total<result[next.n]){
                used[next.n] = 1;
                if(start == n && used[t1]==1 && used[t2] == 1)
                    result[next.n] = total;
                else{
                    result[next.n] = total;
                }
                
                q.push({next.n,total});
            }
        }
    }


}


int main(){

    cin >> n>> e;
    for(int i=0;i<e;i++){
        int a,b,p;
        cin >> a >> b >> p;
        v[a].push_back({b,p});
        v[b].push_back({a,p});
    }


    int t1,t2;
    cin >> t1 >> t2;
    init(n);
    dijkstra(1,t1,t2);
    for(int i=1;i<=n;i++){
        cout << result[i] << " ";
    }


    if(result[n] != MAXI && used[t1] == 1 && used[t2] == 1){
        cout << result[n];
    }
    else{
        cout << -1;
    }

    

    return 0;
}