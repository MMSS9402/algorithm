#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

struct Node{
    int n;
    int price;
};
int maxi = -999;
int total = 0;
int n,a,b;

vector<vector<Node>> v(100001);

int used[100001];

void bfs(int now,int sum, int maxi_in_path){
    if(now ==b){
        total = sum;
        maxi = maxi_in_path;
        return;
    }


    for(int i=0;i<v[now].size();i++){
        int next = v[now][i].n;
        if(used[next] == 1) continue;
        used[next] = 1;
        // if(v[now][i].price>maxi){
        //     maxi = v[now][i].price;
        // }
        bfs(next,sum+v[now][i].price,max(maxi_in_path,v[now][i].price));
        
    }
}


int main(){

    cin >> n >>  a >> b;

    for(int i=0;i<n-1;i++){
        int x,y,p;
        cin >> x >> y >> p;
        v[x].push_back({y,p});
        v[y].push_back({x,p});
    }

    bfs(a,0,0);
    if(n<=2){
        cout << 0 << '\n';
    }
    else{
        cout << total - maxi;
    }


    return 0;
}