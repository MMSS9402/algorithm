#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int map[7][3];

int dp[7][3];

int directy[3] = {-1,0,1};

void init(){
    for(int i=0;i<7;i++){
        for(int j=0;j<3;j++){
            cin >> map[i][j];
        }
    }
    dp[0][0] = map[0][0];
}

int main(){
    init();
    // for(int i=1;i<7;i++){
    //     for(int j=0;j<3;j++){
    //         for(int t=0;t<3;t++){
    //             int dx = i-1;
    //             int dy = j+ directy[t];
    //             if(dy<0||dy>=3) continue;

    //             if(dp[i][j]>dp[dx][dy] + map[i][j]){
    //                 dp[i][j]=dp[dx][dy] + map[i][j];
    //             }

    //         }
    //     }
    // }
    for(int i=1;i<7;i++){
        for(int j=0;j<3;j++){
            if(map[i][j] == 0) continue;
            for(int t=0;t<3;t++){
                int dx = i-1;
                int dy = j + directy[t];
                if(dy<0||dy>=3) continue;
                
                if(dp[i][j]<dp[dx][dy]+ map[i][j]){
                    dp[i][j] = dp[dx][dy]+ map[i][j];
                }
            }
        }
    }
    int maxi = -999;
    for(int i=0;i<3;i++){
        maxi = max(maxi,dp[6][i]);
    }

    cout << maxi;


    return 0;
}