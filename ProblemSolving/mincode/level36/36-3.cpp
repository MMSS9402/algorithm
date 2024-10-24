#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;
const int MAXI = 21e8;

struct Node{
    int n;
    int price;
};

bool operator<(Node v, Node t){
    return t.price<v.price;
}


vector<vector<Node>> v(1000);
priority_queue<Node> q;
int go[1000];
int back[1000];
int result[1000];

void init(){
    for(int i=0;i<1000;i++){
        result[i] = MAXI;
        back[i] = MAXI;
    }
}

int go_dijk(int a,int p){
    init();
    q.push({a,0});
    while(!q.empty()){
        Node now = q.top();
        q.pop();
        if(result[now.n]<now.price) continue;
        for(int i=0;i<v[now.n].size();i++){
            Node next = v[now.n][i];
            int total = now.price + next.price;
            if(result[next.n]>total){
                result[next.n] = total;
                q.push({next.n,total});
            }
        }
    }
    return result[p];
}





int main(){

    int n,m,p;
    cin >> n >> m >> p;

    for(int i=0;i<m;i++){
        int x,y,price;
        cin >> x >> y >> price;
        v[x-1].push_back({y-1,price});
    }

    for(int i=0;i<n;i++){
        go[i] = go_dijk(i, p-1);
    }

    init();
    back[p-1] = 0;
    q.push({p-1,0});
    while(!q.empty()){
        Node now = q.top();
        q.pop();
        if(back[now.n]<now.price) continue;
        for(int i=0;i<v[now.n].size();i++){
            Node next = v[now.n][i];
            int total = now.price + next.price;
            if(back[next.n]>total){
                back[next.n] = total;
                q.push({next.n,total});
            }
        }
    }
    int max = -999;
    int maxi = -1;
    for(int i=0;i<1000;i++){
        if(back[i]==MAXI) break;
        int total = go[i] + back[i];
        if(total>max) {
            max = total;
            maxi = i;
        }
    }
    cout  << max;


    return 0;
}