#include <iostream>
using namespace std;

int MAP[5][5] = {
    {3, 3, 5, 3, 1},
    {2, 2, 4, 2, 6},
    {4, 9, 2, 3, 4},
    {1, 1, 1, 1, 1},
    {3, 3, 5, 9, 2}
};

int sum(int x, int y){
    int direct[4][2]={
        -1,1,
        -1,-1,
        1,1,
        1,-1
    };
    int sum = 0;
    for(int t=0;t<4;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx>=0&&dx<5&&dy>=0&&dy<5){
            sum += MAP[dx][dy];
        }

    }
    return sum;
}

int main(){
    int max = 0;
    int maxx=0;
    int maxy=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(sum(i,j)>max){
                max = sum(i,j);
                maxx=i;
                maxy=j;
            }
        }
    }
    cout << maxx << " " << maxy;
    

    return 0;
}