#include <iostream>
using namespace std;

struct Node{
    int a,b;
};

Node arr[3][4] = {
    {{1,2},{5,3},{1,4},{1,5}},
    {{1,1},{1,1},{1,1},{1,2}},
    {{1,4},{1,5},{2,2},{3,3}},
    };

int direct[4][2] = {
    0,1,
    0,-1,
    1,0,
    -1,0
};

int getDirect(int x,int y){
    int sum = 0;
    int gop = 1;
    for(int t=0;t<4;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx>=0&&dx<4&&dy>=0&&dy<5){
            sum += arr[dx][dy].a;
            gop *= arr[dx][dy].b;
        }

    }
    return sum + gop;
}

int main(){
    int x = 1;
    int y = 1;
    int sum = 0;
    int gop = 1;

    cout << getDirect(1,1);



    return 0;
}