#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
const int M = 21e8;
int map[4][4] = {
    0,3,4,2,
    M,0,10,1,
    M,M,0,M,
    0,2,6,0
};


int main(){

    //for 1: 경유할 곳
    for(int v=0;v<4;v++){
        //for 2: 출발지점
        for(int a=0;a<4;a++){
            //for 3 : 도착 지점
            for(int b=0;b<4;b++){
                if(map[a][b] > map[a][v] + map[v][b]){
                    map[a][b] = map[a][v] + map[v][b];
                }
            }
        }
    }

    return 0;
}