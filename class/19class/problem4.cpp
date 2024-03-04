#include <iostream>
using namespace std;

int arr[2][4] = {
    4,5,4,5,
    5,5,4,5
    };
int tar[2][2] = {
    4,5,
    4,5
    };

int isSame(int dy){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(tar[i][j] != arr[i][dy+j]) return 0;

        }
    }
    return 1;
}

int main(){

    for(int i=0;i<=2;i++){
        int ret = isSame(i);
        if(ret) {
            cout << "o";
            return 0;
        }
    }


    return 0;
}