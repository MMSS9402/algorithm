#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int used[20001];
int flag = 1;
vector<string> str;


void dfs(int now, vector<vector<int>> &t){
    int temp = used[now];
    int value;
    if(used[now] == 1){
        value = 2;
    }
    else if (used[now] == 2){
        value = 1;
    }

    for(int i=0;i<t[now].size();i++){
        int next = t[now][i];
        if(used[next] !=0 && used[next] != value){
            flag = 0;
            return;
        }
        if(used[next] != 0 ) continue;
        used[next] = value;
        dfs(next,t);

    }
}
void init(int v){
    for(int i=1;i<=v;i++){
        used[i] = 0;
    }
}

int main(){
    int k;
    cin >> k;

    for(int i=0;i<k;i++){
        int v,e;
        cin >> v >> e;
        vector<vector<int>> t(v+1);
        init(v);
        flag = 1;
        for(int j=0;j<e;j++){
            int a,b;
            cin >> a >> b;
            t[a].push_back(b);
            t[b].push_back(a);
        }

        for(int q=1;q<=v;q++){
            if(used[q] != 0) continue;
            used[q] = 1;
            dfs(q,t);
        }

        if(flag) str.push_back("YES");
        else str.push_back("NO");


        // cout << str[i];

    }

    for(int i =0;i<str.size();i++){
        cout << str[i] << '\n';
    }
    

    return 0;
}