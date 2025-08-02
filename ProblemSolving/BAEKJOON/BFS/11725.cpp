#include <iostream>
#include <string>
#include <vector>

#include <queue>
using namespace std;
int n;
int result[100001];

vector<vector<int>> v(100001);


void bfs(int start){
    
    queue<int> q;
    q.push(start);
    result[start] = -1;
    // used[start] = 1;
    while(!q.empty()){
        int now = q.front();
        q.pop();

        for(int i=0;i<v[now].size();i++){
            int next = v[now][i];
            // if(used[next] == 1) continue;
            if(result[next] != 0) continue;
            // used[next] = 1;
            result[next] = now;
            q.push(next);
        }
    }

}


int main(){
    ios::sync_with_stdio(false);  // C 스타일 입출력과 동기화 비활성화
    cin.tie(NULL);
    cin >> n;

    for (int i=0;i<n-1;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);

    for(int i=2;i<=n;i++){
        cout << result[i] << '\n';
    }


    return 0;
}