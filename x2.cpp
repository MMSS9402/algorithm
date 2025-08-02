#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> v(101);
int cnt = 0;

int used[101];

void run(int now){
    for(int i=0;i<v[now].size();i++){
        int next = v[now][i];
        if(used[next]!=1){
            used[next]=1;
            run(next);
            cnt ++;
        }
    }
}

int main(){

    int n;
    int t;
    cin >> n >> t;
    for(int i=0;i<t;i++){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    used[1] = 1;
    run(1);
    cout << cnt;

    return 0;
}