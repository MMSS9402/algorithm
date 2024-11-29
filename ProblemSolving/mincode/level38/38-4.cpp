#include <iostream>
#include <queue>
#include <string>
#include <cstring>
using namespace std;

char map[8][9];
int used[8][9];
struct Node{
    int x,y;
    int lev;
};
int direct[4][2]={
    0,1,
    0,-1,
    1,0,
    -1,0
};
queue<Node> q;
queue<Node> q1;

int main(){

    for(int i=0;i<8;i++){
        cin >> map[i];
    }

    q.push({0,8,0});
    q1.push({0,8,0});
    map[0][8] = '_';
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        int cnt = 0;
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=8||dy>=9) {
                // cnt++;
                continue;
            }
            if(used[dx][dy] == 1){
                // cnt++;
                continue;
            }
            if(map[dx][dy] !='#'){
                // cnt++;
                continue;
            }
            // if(cnt == 4) flag = -1;
            map[dx][dy] = '_';
            // cout << dx << dy << endl;
            used[dx][dy] = 1;
            q.push({dx,dy,0});
            q1.push({dx,dy,0});
        }
    }
    int min = 999;
    memset(used,0,8*9*sizeof(int));
    while(!q1.empty()){
        Node now = q1.front();
        q1.pop();
        used[now.x][now.y] = 1;
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=8||dy>=9) {
                // cnt++;
                continue;
            }
            if(used[dx][dy] == 1) continue;
            used[dx][dy] = 1;
            q1.push({dx,dy,now.lev+1});
            
            if(map[dx][dy] == '#' && now.lev+1<min){
                // cout << dx << " " << dy << endl;
                min = now.lev+1;
            }

        }
    }
    cout << min-1;


            



    return 0;
}