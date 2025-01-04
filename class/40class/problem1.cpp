#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int vect[4][4] = {
    0,4,7,9,
    1,2,3,2,
    6,5,20,4,
    3,1,7,0
};

int acc[4][4];

enum{
    RIGHT = 1,
    DOWN,
    NONE

};

int bang[4][4];

void init(){
    for(int i=0;i<4;i++){
        bang[i][3] = DOWN;
        bang[3][i] = RIGHT;
    }
    bang[3][3] = NONE;

    for(int i=2;i>=0;i--){
        acc[i][3] = acc[i+1][3] + vect[i][3];
        acc[3][i] = acc[3][i+1] + vect[3][i];
    }
}

int main(){

    init();
    for(int i=2;i>=0;i--){
        for(int j=2;j>=0;j--){
            //오른쪽 acc vs 아래 acc 비교해서 작은것 선택
            if(acc[i][j+1] < acc[i+1][j]){
                bang[i][j] = RIGHT;
                acc[i][j] = acc[i][j+1] + vect[i][j];
            }
            else{
                bang[i][j] = DOWN;
                acc[i][j] = acc[i+1][j] + vect[i][j];
            }
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << acc[i][j] << " ";
        }
        cout << endl;
    }


    // cout << acc[0][0]<< endl;

    // int nx = 0;
    // int ny = 0;
    // while(1){
    //     cout << nx << "," << ny << "\n";
    //     if(bang[nx][ny] == RIGHT) ny++;
    //     else if (bang[nx][ny] == DOWN) nx++;
    //     else if (bang[nx][ny] == NONE) break;
    // }



   



    return 0;
}