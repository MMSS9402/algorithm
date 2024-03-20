#include <iostream>
using namespace std;

int arr[7][7] = {
    0,0,0,0,0,0,0,
    0,0,1,0,1,0,0,
    0,1,-1,0,-1,1,0,
    0,0,1,-1,1,0,0,
    0,0,-1,1,0,1,0,
    0,1,1,0,0,0,0,
    0,0,0,0,0,0,0
};
int direct[4][2]={
    0,1,
    0,-1,
    1,0,
    -1,0
};

int isExist(int x, int y){
    if(arr[x][y] != -1) return 0;
    for(int t=0;t<4;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        // cout << "dx:" << dx <<"dy:" <<  dy << endl;
        if(dx>=0 && dy>=0 && dx<7&&dy<7){
            if(arr[dx][dy] != 1){
                return 0;
            }
        }
    }
    return 1;

}

int main(){

    int x1,y1;
    cin >> x1 >> y1;

    arr[x1][y1] = 1;

    int cnt = 0;
    // cout << "(" << 2 << ","<<2<<")"<<isExist(2,2)<< endl;
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            // cout << "(" << i << ","<<j<<")"<<isExist(i,j)<< endl;
            if(isExist(i,j)) cnt++;
        }
    }
    cout << cnt;

    return 0;
}