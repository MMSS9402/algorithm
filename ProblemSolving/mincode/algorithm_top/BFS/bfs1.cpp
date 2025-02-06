#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int map[10][10];
int n;

void bfs(int start){
    queue<int> q;
    q.push(start);
    int used[10]={0};
    used[start] = 1;

    while(!q.empty()){
        int now = q.front();
        q.pop();

        cout << now << " ";

        for(int i=0;i<n;i++){
            if(map[now][i] == 0) continue;
            // cout << now << ',' << i << " " << map[now][i] << " " << '\n';
            if(used[i] == 1) continue;
            used[i] = 1;
            // cout << now << ',' << i << " " << map[now][i] << " " << '\n';
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