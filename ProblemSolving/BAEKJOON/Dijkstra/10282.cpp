#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
struct Node{
    int node;
    int price;
};
bool operator<(Node v, Node t){
    return t.price<v.price;
}
int result[10001];
const int MAXI = 21e8;

void init(int node){
    for(int i=1;i<=node;i++){
        result[i] = MAXI;
    }
}

void dijkstra(int start, vector<vector<Node>> v){
    priority_queue<Node> q;
    q.push({start,0});

    while(!q.empty()){
        Node now = q.top();
        q.pop();
        if(result[now.node]<now.price) continue;

        for(int i=0;i<v[now.node].size();i++){
            Node next = v[now.node][i];
            int total = next.price+now.price;
            if(result[next.node]>total){
                result[next.node] = total;
                q.push({next.node,total});
            }
        }
    }

}

int main(){

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        vector<vector<Node>> v(10001);
        int n,d,c;
        cin >> n >> d >> c;
        for(int i=0;i<d;i++){
            int a,b,p;
            cin >> a >> b >> p;
            v[b].push_back({a,p});
        }
        init(n);
        result[c] = 0;
        dijkstra(c,v);
        int max_time = -999;
        int cnt = 0;
        for(int i=1;i<=n;i++){
            if(result[i] == MAXI) continue;
            cnt++;
            if(result[i]>max_time){
                max_time = result[i];
            }
        }
        cout << cnt << " " << max_time << '\n';

    }



    return 0;
}