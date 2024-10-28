#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
const int MAXI = 21e8;
struct Node{
    int n;
    int price;
};

bool operator<(Node v, Node t){
    return t.price<v.price;
}


vector<vector<Node>> v(100000);
priority_queue<Node> q;
int result[100000];
// int used[100000];


void init(){
    for(int i=0;i<100000;i++){
        result[i] = MAXI;
    }
}

int dijk(int k,int a){
    init();
    q.push({k,0});
    while(!q.empty()){
        Node now = q.top();
        q.pop();
        if(result[now.n] <now.price) continue;

        for(int i=0;i<v[now.n].size();i++){
            Node next = v[now.n][i];
            int total = next.price+now.price;
            if(total<result[next.n]){
                result[next.n] = total;
                q.push({next.n,total});
            }
        }
    }
    return result[a];
}


int main(){
    int c,p,k,A,B;
    cin >> c >> p >> k >> A >> B;
    k = k-1;
    A = A-1;
    B = B-1;
    for(int i=0;i<c;i++){
        int x,y,z;
        cin >> x >> y >> z;
        v[x-1].push_back({y-1,z});
        v[y-1].push_back({x-1,z});
    }
    int amin1 = dijk(k,A);
    int bmin1 = dijk(A,B);
    int bmin2 = dijk(k,B);
    int amin2 = dijk(B,A);
    int min1 = amin1+bmin1;
    int min2 = amin2+bmin2;

    if(min1<min2){
        cout << min1;
    }
    else{
        cout << min2;
    }
    
   

    return 0;
}