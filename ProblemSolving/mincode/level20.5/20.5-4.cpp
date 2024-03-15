#include <iostream>
using namespace std;


int main(){
    int A[4][4];
    int B[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> A[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> B[i][j];
        }
    }
    int flag = 0;
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(A[i][j] ==1 && B[i][j]==1){
                flag = 1;
                break;
            }
        }
    }
    if(flag) cout << "걸리다";
    else cout << "걸리지않는다";

    return 0;
}