#include <iostream>
using namespace std;

char arr[4][5] = {
    "ABAB",
    "BTBT",
    "KABK",
    "KBTK"
};
char tar[2][3] = {
    "AB",
    "BT"
};

int isSame(int dx, int dy){

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[dx+i][dy+j] != tar[i][j]) return 0;
        }
    }

    return 1;

}

int main(){

    int cnt = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(isSame(i,j)) cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}