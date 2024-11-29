#include <iostream>
#include <queue>
using namespace std;
struct Node 
{
    int elsax;
    int elsay;
    int annax;
    int annay;
    int lev;
};


int n;
char map[6][6];
int result[5][5];
int used[5][5];

int direct1[8][2] = {
    0,1,
    1,0,
    0,-1
    -1,0,
    1,1,
    -1,-1,
    1,-1,
    -1,1
};
int direct2[5][2] = {
    0,0,
    0,-1,
    0,1,
    1,0,
    -1,0
};
queue<Node> q;

int bfs(){
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        int len = 8;
        int scalex = now.annax - now.elsax;
        int scaley = now.annay - now.elsay;
        if(scalex < 0) scalex = -scalex;
        if(scaley < 0) scaley = -scaley;
        if(scalex<2 || scaley<2){
            len = 4;
        }
        used[now.annax][now.annay] = 1;
        used[now.elsax][now.elsay] = 1;
        for(int i=0;i<5;i++){
            int adx = now.annax + direct2[i][0];
            int ady = now.annay + direct2[i][1];
            
            if(adx<0||ady<0||adx>=n||ady>=n) continue;
            if(used[adx][ady] !=0) continue;
            if(map[adx][ady] == '#') continue;
            used[adx][ady] = 1;
            for(int j=0;j<len;j++){
                // cout << "scale :" << scalex << " " << scaley << endl;
                int edx = now.elsax + direct1[j][0];
                int edy = now.elsay + direct1[j][1];
                if(edx<0||edy<0||edx>=n||edy>=n) continue;
                if(used[edx][edy] !=0 ) continue;
                if(map[edx][edy] == '#') continue;
                used[edx][edy] = 1;
                q.push({adx,ady,edx,edy,now.lev+1});
                if(adx == edx && ady == adx) {
                    return now.lev+1;
                }



            }
        }
    }
    return -1;

}


int main(){

    cin >> n;
    // n = n-1;

    for(int i=0;i<n;i++){
        cin >> map[i];
    }   

    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    q.push({x1,y1,x2,y2,0});

    int ret = bfs();



    return 0;
}