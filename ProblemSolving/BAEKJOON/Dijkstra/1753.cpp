#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Node{
    int n;
    int price;
};
const int MAXI = 21e8;
int result[20001];
vector<vector<Node>> alist(20001);
bool operator<(Node v,Node t){
    return t.price<v.price;
}

void dijkstra(int start){
    priority_queue<Node> q;
    q.push({start,0});

    while(!q.empty()){
        Node now = q.top();
        q.pop();

        if(result[now.n]<now.price) continue;

        for(int i=0;i<alist[now.n].size();i++){
            Node next = alist[now.n][i];
            int total = next.price + now.price;
            if(result[next.n]>total){
                result[next.n] = total;
                q.push({next.n,total});
            }
        }
    }
}

void init(int node){
    for(int i=0;i<=node;i++){
        result[i] = MAXI;
    }
}


int main(){
    int v,e;
    cin >> v >> e;
    int start;
    cin >> start;

    for(int i=0;i<e;i++){
        int a,b,c;
        cin >> a >> b >> c;
        alist[a].push_back({b,c});
    }

    init(v);
    result[start] = 0;
    dijkstra(start);


    for(int i=1;i<=v;i++){
        if(result[i] == MAXI){
            cout << "INF" << '\n';
        }
        else{
            cout << result[i] << '\n';
        }
    }




    return 0;
}