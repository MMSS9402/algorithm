#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n;
struct Node{
    int k;
    int p;
};
int maxi = -99;
vector<vector<Node>> v(10001);
int used[10001];

void dfs(int start, int sum){
    if(sum>maxi){
        maxi = sum;
    }
    // cout << "moon";
    for(int i=0;i<v[start].size();i++){
        Node next = v[start][i];
        if(used[next.k] == 1) continue;
        used[next.k] = 1;
        dfs(next.k,sum+next.p);
    }
}

void init(){  
    for(int i=1;i<=n;i++){
        used[i] = 0;
    }
}



int main(){

    cin >> n;

    for(int i=0;i<n-1;i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }

    for(int i=1;i<=n;i++){
        init();
        used[i] = 1;
        dfs(i,0);
    }

    cout << maxi;




    return 0;
}