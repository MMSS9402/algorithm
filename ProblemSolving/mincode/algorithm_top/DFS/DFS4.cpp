#include <iostream>
#include <string>
#include <vector>
using namespace std;
int n;
int a,b;
struct Node{
    int n;
    int price;
};

int map[1001][1001];
int used[1001];
int maxi = -99;
int mini = 999;
void run(int now, int sum){
    if(now == b){
        if(sum>maxi){
            maxi = sum;
        }
        if(sum<mini){
            mini = sum;
        }
        return;
    }
    for(int i=0;i<n;i++){
        if(map[now][i] == 0 ) continue;
        if(used[i] == 1) continue;
        run(i,sum+map[now][i]);
    }
}

int main(){
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }

    cin >> a >> b;

    used[a] = 1;
    run(a,0);
    cout << mini << '\n';
    cout << maxi;

    return 0;
}