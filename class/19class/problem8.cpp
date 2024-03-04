#include <iostream>
using namespace std;


int main(){
    int x = 1;
    int y = 1;

    int map[4][5]={
    1,1,1,1,1,
    2,2,2,2,2,
    1,0,1,0,1,
    0,1,0,1,0
    };

    int sum = 1;
    
    int direct[5][2]={
        0,0,
        -1,1,
        -1,-1,
        1,1,
        1,-1
    };

    for(int t=0;t<5;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx>=0 && dx<4 && dy>=0 && dy<5){
            sum *= map[dx][dy];
        }
    }

    cout << sum << endl;

    return 0;
}