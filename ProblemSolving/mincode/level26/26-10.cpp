#include <iostream>
using namespace std;

int map[4][4] = {
    {0,0,0,0},
    {0,1,1,0},
    {2,2,3,0},
    {1,3,3,1}
};

int main(){
    int flag = 1;
    for(int i=0;i<4;i++){
        for(int j=3;j>0;j--){
            // map[j][i];
            int a = map[j][i] - map[j-1][i];
            if(a<0){
                flag = 0;
                break;
            }
        }
    }
    if(flag) cout << "안전한성";
    else cout << "안전하지않은성";

    return 0;
}