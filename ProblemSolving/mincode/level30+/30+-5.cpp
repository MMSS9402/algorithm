#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int x,y;

int map[10][10];
int used[10][10];


int main(){

    
    cin >> x >> y;

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin >> map[i][j];
        }
    }

    
    int k = 0;
    while(k < 3){
        int max = -1;
        int maxIdx = 0;
        int maxIdy = 0;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(used[i][j] == 1) continue;
                if(map[i][j]>max){
                    max = map[i][j];
                    maxIdx = i;
                    maxIdy = j;
                }

            }
        }
        used[maxIdx][maxIdy] = 1;
        cout << max << "(" << maxIdx << "," << maxIdy << ")"<<endl; 
        k++;
    }



    return 0;
}