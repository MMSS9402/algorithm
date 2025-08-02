#include <iostream>
#include <string>
#include <vector>
using namespace std;

int map[101][101];
int used[101];
int s,e;
int mini = 999;
int maxi = -999;
int n;

void run(int now, int sum){

    if(now == e){
        if(sum<=mini){
            mini = sum;
        }
        if(sum>=maxi){
            maxi = sum;
        }
        return;
    }

    for(int i=0;i<n;i++){
        int next = i;
        if(map[now][i] == 0) continue;
        if(used[next] == 1) continue;
        used[next] = 1;
        run(i,sum+map[now][i]);
        used[next] = 0;
    }
}

int main(){

    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    cin >> s >> e;
    used[s] = 1;
    run(s,0);

    cout << mini << '\n';
    cout << maxi;
    return 0;
}