#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

const int MAXI = 21e8;
int n,m;
char map[11][11];
char arr[4] = {'1','2','3','4'};
int result[4];
int direct[4][2] = {
    0,1,
    0,-1,
    1,0,
    -1,0
};
struct Node{
    int x,y;
    int price;
};
int used[10][10];

queue <Node> q;

void bfs(int startX, int startY){

    // cout << startX << startY << "bfs" << endl;
    memset(used,0,10*10*sizeof(int));
    q.push({startX,startY,0});
    used[startX][startY] = 0;
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=n||dy>=m) continue;
            if(used[dx][dy] != 0 ) continue;
            if(map[dx][dy] == '#') continue;
            used[dx][dy] = now.price+1;
            q.push({dx,dy,now.price+1});
        }
    }

}

int main(){
    cin >> n >> m;
    for(int i=0;i<4;i++){
        result[i] = MAXI;
    }
    for(int i=0;i<n;i++){
        cin >> map[i];
    }

    // cout << map[0][3]
    int startx = 0;
    int starty = 0;
    int sum = 0;

    for(int k=0;k<4;k++){
        // cout << " start " << startx <<" " << starty << endl; 

        bfs(startx,starty);
        int min = 99;
        int xidx = 0;
        int yidx = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // cout << " bbbb" << i << j << " " << map[i][j]<< " " << arr[k] <<  " " << used[2][3] <<  endl;
                if(map[i][j] == arr[k] && startx == i && starty == j){
                    min = 0;
                }
                if(map[i][j] == arr[k] && min>used[i][j]){
                    min = used[i][j];
                    // cout << i << " " << j << "dd" <<  endl;
                    // cout << k << " " << used[i][j] << endl;
                    xidx = i;
                    yidx = j;
                }
                    
                }
                
            }
            result[k] = min;
            startx = xidx;
            starty = yidx;
        }
        
    

    for(int i=0;i<4;i++){
        // cout << result[i] << endl;
        sum += result[i];
    }   

    cout << sum << "회";


    return 0;
}