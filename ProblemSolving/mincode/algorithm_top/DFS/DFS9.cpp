#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> v(31);
int used[31];
int check[31];
int n;

void dfs(int now, int previous_node, int lvl){
    if(previous_node != 1 && check[previous_node] != 1){
        check[previous_node] = 1;
        cout << "ok";
    }

    for(int i=0;i<v[now].size();i++){
        int next = v[now][i];
        if(used[next] == 1) continue;
        used[next] = 1;
        dfs(next,now,lvl+1);
    }
}

int main(){
    cin >> n;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1,1,0);


    return 0;
}