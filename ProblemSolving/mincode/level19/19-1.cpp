
#include <iostream>
using namespace std;

int arr[3][3] = {
    3,5,4,
    1,1,2,
    1,3,9
};

int main(){

    int direct[4][2]={
        0,1,
        1,0,
        0,-1,
        -1,0
    };

    int x,y;
    cin >> x >> y;
    int sum =0;
    for(int t=0;t<4;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx>=0 && dx<3 && dy>=0 &&dy<3){
            sum += arr[dx][dy];
        }
        }

    cout << sum;

    return 0;
}