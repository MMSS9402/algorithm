#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
const int MAXI = 21e8;
int map[1000][1000];
int direct[4][2]={
    0,1,
    0,-1,
    1,0,
    -1,0
};
int result[1000][1000];

struct Node{
    int x,y;
    int price;
};

bool operator<(Node v, Node t){
    return t.price<v.price;
}
void init(){
    for(int i=0;i<1000;i++){
        for(int j=0;j<100;j++){
            result[i][j] = MAXI;
        }
    }

}

priority_queue<Node> q;

int djik(int n, int x, int y){
    init();
    
    q.push({x,y,1});
    while(!q.empty()){
        Node now = q.top();
        q.pop();
        if(result[now.x][now.y] < now.price) continue;
        for(int t=0;t<4;t++){
            // cout << now.x << " " << now.y << endl;
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dx>=n||dy<0||dy>=n) continue;
            if(map[dx][dy] == -1) continue;
            int total = map[dx][dy] + now.price;

            if(result[dx][dy]>total){
                result[dx][dy] = total;
                q.push({dx,dy,total});
            }
        }
    }
    int max = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(map[i][j] == -1) continue;
            // cout << result[i][j] << endl;
            if(result[i][j]>max){
                max = result[i][j];
            }
        }
        // cout << endl;
    }
    return max;

}

int main(){

    int x,y,n;
    cin >> x >> y;
    cin >> n;
    // x = x-1;
    // y = y-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    int max = djik(n,x,y);
    cout << max;

    

    

    return 0;
}