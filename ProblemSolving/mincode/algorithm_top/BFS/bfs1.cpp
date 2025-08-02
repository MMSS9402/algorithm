#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int map[11][11];
int used[11];
int n;

void bfs(int now){
    queue<int> q;
    q.push(now);
    
    used[now] = 1;
    
    while(!q.empty()){
        int now = q.front();
        cout << now << " ";
        q.pop();
        for(int i=0;i<n;i++){
            if(map[now][i] != 1) continue;
            if(used[i] == 1) continue;
            used[i] = 1;
            q.push(i);
        }

    }
}

int main(){

    
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }

    bfs(0);


    

    return 0;
}