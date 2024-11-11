#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

int map[7][7];
struct Node{
    int x,y;
    int price;
};
int direct[4][2] = {
    0,1,
    0,-1,
    1,0,
    -1,0
};
int result[7][7];
int used[7][7];

queue<Node> q;

int bfs(int x,int y, int tgt){
    int type = map[x][y];
    cout << "type : " << type << endl; 
    while(!q.empty()) q.pop();
    memset(result,0,7*7*sizeof(int));
    memset(used,0,7*7*sizeof(int));
    result[x][y] = 0;
    used[x][y] = 1;
    q.push({x,y,0});
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=7||dy>=7) continue;
            if(result[dx][dy] != 0) continue;
            if(used[dx][dy] != 0) continue;
            used[dx][dy] = 1;
            result[dx][dy] = now.price+1;
            if(map[dx][dy] == type && result[dx][dy]<tgt){
                // cout << dx << dy <<" " << endl;
                // cout << "type:" << type <<endl;
                // cout <<  "tgt : " << tgt << endl;
                // cout << result[dx][dy] << endl;
                // cout << " map[dx][dy]" << map[dx][dy] << endl;
                // cout << " x, y" << x << y << endl;
                return -1;
            }
            if(now.price+1 >= tgt) continue;
            q.push({dx,dy,now.price+1});
        }
    }
    return 1;

}
int main(){

    for (int i = 0; i < 7; i++) {
        string line;
        cin >> line; // 한 줄을 문자열로 입력 받음
        for (int j = 0; j < 7; j++) {
            map[i][j] = line[j] - '0'; // 각 문자를 숫자로 변환하여 배열에 저장
        }
    }
    int ret = 1;
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            // cout << "come in1" << endl;
            if(map[i][j] == 1){
                ret = bfs(i,j,3);
                if(ret == -1){
                    break;
                }
            }
            if(map[i][j] == 2){
                // cout << "come in2" << endl;
                ret = bfs(i,j,4);
                if(ret == -1){
                    break;
                }
            }
        }
    }

    if (ret == 1) {
        cout << "pass";
    } else {
        cout << "fail";
    }
    

    
    
    


    return 0;
}