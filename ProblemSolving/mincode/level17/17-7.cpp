#include <iostream>
using namespace std;

int mask[2][5] = {
    0,0,1,0,0,
    0,0,1,1,1
};

int arr[2][5] = {
    3,5,4,1,1,
    3,5,2,5,6
};

int main(){

    int a;
    cin >> a;

    int flag = 0;

    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            if(mask[i][j] == 1 && arr[i][j] == a){
                flag = 1;
            }
        }
    }
    if(flag){
        cout << a << " " << "존재";
    }
    else cout << a << " " << "없음";


    return 0;
}