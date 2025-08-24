#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
struct Node{
    int n;
    int price;
};
int n,e;
int result[801];
vector<vector<Node>> v(801);

bool operator<(Node v, Node t){
    return t.price<v.price;
}

const int MAXI = 21e8;

void init(int node){
    for(int i=1;i<=node;i++){
        result[i] = MAXI;
    }
}

int dijkstra(int start, int end){
    init(n);
    priority_queue<Node> q;
    result[start] = 0;
    q.push({start,0});

    while(!q.empty()){
        Node now = q.top();
        q.pop();

        if(result[now.n]<now.price) continue;

        if(now.n == end){
            return now.price;
        }

        for(int i=0;i<v[now.n].size();i++){
            Node next = v[now.n][i];
            int total = next.price + now.price;
            if(result[next.n]>total){
                result[next.n] = total;
                q.push({next.n,total});
            }
        }
        
    }

    return -1;
}

int main(){

    cin >> n >> e;

    for(int i=0;i<e;i++){

        int a,b,c;
        cin >> a >> b >> c;

        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }

    int a,b;
    cin >> a >> b;

    int d11 = dijkstra(1,a);
    int d12 = dijkstra(a,b);
    int d13 = dijkstra(b,n);
    // cout  << d11 << " " << d12 << " " << d13 << endl;
    int total1 = 0;
    if(d11 == -1 || d12 == -1 || d13 == -1){
        total1 = -1;
    }
    else{
        total1 = d11 + d12 + d13;
    }

    int d21 = dijkstra(1,b);
    int d22 = dijkstra(b,a);
    int d23 = dijkstra(a,n);

    int total2 = 0;
    if(d21 == -1 || d22 == -1 || d23 == -1){
        total2 = -1;
    }
    else{
        total2 = d21 + d22 + d23;
    }

    if(total1 == -1 && total2 == -1){
        cout << -1;
    }
    else if(total1 == -1 && total2 != -1) {
        cout << total2;
    }
    else if(total1 !=-1 && total2 == -1){
        cout << total1;
    }
    else if(total1 < total2){
        cout << total1;
    }
    else if(total2 < total1){
        cout << total2;
    }
    else if(total2 == total1){
        cout<< total1;
    }
    
    

    return 0;
}