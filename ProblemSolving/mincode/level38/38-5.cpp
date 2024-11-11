#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n;
char map[5][5];
struct Node{
    int x,y;
    int lev;
};

queue<Node> q1;
queue<Node> q2;
int direct1[4][2] = {
    0,1,
    0,-1,
    1,0,
    -1,0
};
int direct2[4][2]={
    1,1,
    1,-1,
    -1,1,
    -1,-1,
};
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin >> map[i][j];
        }
    }

    int x1,y1;
    int x2,y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    q1.push({x1,y1,0});
    q2.push({x2,y2,0});
    while(!q1.empty()){
        Node elsa = q1.front();
        Node anna = q2.front();
        q1.pop();
        q2.pop();
        int xscale = elsa.x - anna.x;
        int yscale = elsa.y - anna.y;
        if(xscale<0) xscale = - xscale;
        if(yscale<0) yscale = -yscale;
        if(xscale>=3 || yscale>=3) {
            for(int t=0;t<4;t++){
                int edx = elsa.x + direct2[t][0];
                int edy = elsa.y + direct2[t][1];
                int adx = anna.x + direct1[t][0];
                int ady = anna.y + direct1[t][1];
            }
        }
        
    }

    


    return 0;
}