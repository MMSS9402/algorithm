#include <iostream>
#include <algorithm>
using namespace std;
const int M = -99999;

int map[3][9] = {
    M,3,100,100,3,-5000,4,9,10,
    0,5,2,100,4,-5000,55,3,7,
    M,1,5,4,7,2,1,1,4
};
int dp[3][9];

void init(){
    for(int i=0;i<3;i++){
        for(int j=0;j<9;j++){
            dp[i][j] = M;
        }
    }
    dp[1][0] = 0;
}

int main(){

    init();
    int directx[3] = {-1,0,1};

    for(int j=1;j<9;j++){
        for(int i=0;i<3;i++){
            for(int t=0;t<4;t++){
                int nj = j - 1;
                int ni = i + directx[t];

                if(ni<0||ni>=3) continue;

                if(dp[i][j]<dp[ni][nj] + map[i][j]){
                    dp[i][j]=dp[ni][nj] + map[i][j];
                }
            }
        }
    }
    
    int maxi = 0;
    for(int i=0;i<3;i++){
        maxi = max(maxi,dp[i][8]);
    }

    cout << maxi;

    return 0;
}