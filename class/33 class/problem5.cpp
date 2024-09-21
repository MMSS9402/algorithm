#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int map[10][10];
int myBoss[10];
int makeGroupCnt;

int find(int now){
    if(myBoss[now] == 0){
        return now;
    }
    int ret = myBoss[now];
    myBoss[now] = ret;
    return ret;;
}

void SetBoss(int t1, int t2){

    int a = find(t1);
    int b = find(t2);
    if(a == b) return;
    myBoss[b] = a;
    makeGroupCnt++;
}

int main(){
    int n;
    cin >> n;
    int k=0;
    int direct[4][2]={-1,0,1,0,0,1,0,-1};
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        map[x][y] = ++k;
        for(int t=0;t<4;t++){
            int dx = x+direct[t][0];
            int dy = y+direct[t][1];
            if(dx>=0&&dx<10&&dy>=0&&dy<10){
                if(map[dx][dy] == 0) continue;
                if(map[dx][dy] != 0){
                    SetBoss(map[x][y],map[dx][dy]);
                    
                }
            }
        }
    }

    cout << n - makeGroupCnt << endl;
    


    return 0;
}

// 7
// 1 1
// 1 2
// 2 3
// 2 4
// 3 2
// 4 2
// 2 2