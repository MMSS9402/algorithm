#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int map[51][51];
int used[51][51];
int w,h;

int direct[8][2] = {
    1,0,
    0,1,
    -1,0,
    0,-1,
    1,1,
    1,-1,
    -1,1,
    -1,-1,
};
void init(){
    for(int i=0;i<=50;i++){
        for(int j=0;j<=50;j++){
            map[i][j] = 0;
            used[i][j] = 0;
        }
    }
}

void bfs(int x, int y){
    for(int t=0;t<8;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx<0||dy<0||dx>=h||dy>=w) continue;
        if(used[dx][dy] == 1) continue;
        if(map[dx][dy] == 0) continue;
        used[dx][dy] = 1;
        bfs(dx,dy);
    }
}



int main(){

    while(true){
        
        init();
        cin >> w >> h;
        int cnt = 0;
        if(w==0&&h==0) break;

        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin >> map[i][j];
            }
        }

        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(map[i][j] == 0) continue;
                if(used[i][j] == 1) continue;
                used[i][j] = 1;
                bfs(i,j);
                cnt++;
            }
        }

        cout << cnt << '\n';



    }




    return 0;
}