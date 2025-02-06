#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int map[1001][1001];

struct Node{
    int id;
    int x;
    int y;
};

priority_queue<Node> q;

bool operator<(Node v, Node t){
    return t.id<v.id;
}

int direct[4][2]={
    0,1,
    1,0,
    0,-1,
    -1,0
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n+m;i++){
        int id,x,y;
        cin >> id;
        // cout << "i: " << i << '\n';
        if(id ==0){
            int flag = 0;
            while(!q.empty()){
                Node temp = q.top();
                q.pop();
                if(map[temp.x][temp.y] != 1){
                    flag = temp.id;
                    for(int t=0;t<4;t++){
                        int dx = temp.x + direct[t][0];
                        int dy = temp.y + direct[t][1];
                        if(dx<0||dy<0||dx>1000||dy>1000) continue;
                        if(map[dx][dy]==1) continue;
                        map[dx][dy] = 1;
                    }
                    break;
                }
            }
            if(flag!=0){
                cout << flag << '\n';
            }
            else{
                cout << -1 << '\n';
            }
        }
        else if(id!=0){
            cin >> x >> y;
            q.push({id,x,y});
        }

        
    }






    return 0;
}