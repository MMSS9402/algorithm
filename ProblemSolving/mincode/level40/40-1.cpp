#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int map[4][4];

enum{
    RIGHT = 1,
    DOWN,
    NONE
};

int dp[4][4];
int bang[4][4]; 


void init(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> map[i][j];
        }
    }
    for(int i=2;i>=0;i--){
        dp[i][3] = dp[i+1][3] + map[i][3];
        bang[i][3] = DOWN;
        dp[3][i] = dp[3][i+1] + map[3][i];
        bang[3][i] = RIGHT;
    }

    bang[3][3] = NONE;
}



int main(){
    init();

    for(int i=2;i>=0;i--){
        for(int j=2;j>=0;j--){
            if(dp[i+1][j]<dp[i][j+1]){
                dp[i][j] = dp[i+1][j] + map[i][j];
                bang[i][j] = DOWN;
            }
            else{
                dp[i][j] = dp[i][j+1] + map[i][j];
                bang[i][j] = RIGHT;
            }
        }
    }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int dx = 0;
    int dy = 0;
    while(1){
        cout << dx << "," << dy << '\n';
        if(bang[dx][dy] == RIGHT) dy++;
        else if (bang[dx][dy] == DOWN) dx++;
        else if (bang[dx][dy] == NONE) break;
    }



    return 0;
}