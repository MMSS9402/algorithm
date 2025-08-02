#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

vector<vector<int>> v1(100001);
vector<vector<int>> v2(100001);
int n,m,x;
int used[100001];

int up = 0;
int down = 0;

void udfs(int now,int cnt){
    used[now] = 1;
    for(int i=0;i<v1[now].size();i++){
        int next = v1[now][i];
        if(used[next] == 1) continue;
        up++;
        udfs(next,cnt+1);
    }
}

void ddfs(int now,int cnt){
    used[now] = 1;
    for(int i=0;i<v2[now].size();i++){
        int next = v2[now][i];
        if(used[next] == 1) continue;
        down++;
        ddfs(next,cnt+1);
    }
}



int main(){

    cin >> n >> m >> x;


    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        v1[a].push_back(b);
        v2[b].push_back(a);
    }
    ddfs(x,0);
    memset(used, 0, sizeof(used));
    udfs(x,0);

    cout << down+1 << endl;
    cout << n-up << endl;


    return 0;
}