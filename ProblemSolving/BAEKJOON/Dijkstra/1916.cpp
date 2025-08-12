#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node{
    int n;
    int price;
};

bool operator<(Node v, Node t){
    return t.price<v.price;
}

vector<vector<Node>> v(1001);
int result[1001];
const int MAXI = 21e8;

void dijkstra(int start){
    priority_queue<Node> q;
    q.push({start,0});

    while(!q.empty()){
        Node now = q.top();
        q.pop();
        if(result[now.n]<now.price) continue;

        for(int i=0;i<v[now.n].size();i++){
            Node next = v[now.n][i];
            int total = next.price + now.price;
            if(result[next.n]>total){
                result[next.n] = total;
                q.push({next.n,total});
            }
        }

    }
}

void init(int node){
    for(int i=1;i<=node;i++){
        result[i] = MAXI;
    }
}

int main(){
    int n,m;

    cin >> n;
    cin >> m;

    for(int i=0;i<m;i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
    }

    int start,end;
    cin >> start >> end;
    init(n);
    result[start] = 0;
    dijkstra(start);
    // for(int i=0;i<=n;i++){
    //     cout << result[i] << " ";
    // }


    cout << result[end];
    
    return 0;
}