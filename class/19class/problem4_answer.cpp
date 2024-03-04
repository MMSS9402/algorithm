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


int isSame(int dx, int dy){
    for(int x=0;x<2;x++){
        for(int y=0;y<2;y++){
            if(tar[x][y] != arr[dx+x][dy+y]) return 0;
        }
    }
    return 1;

}

int main(){
    int cnt = 0;
    for(int y=0;y<=4-2;y++){
        cnt += isSame(0,y);
    }

    cout << cnt;
    return 0;

}