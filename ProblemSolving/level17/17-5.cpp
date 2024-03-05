#include <iostream>
using namespace std;

int arr[3][3] = {
    3,5,9,
    4,2,1,
    5,1,5
    };

int isExist(int a){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a == arr[i][j]) return 1;
        }
    }
    return 0;
}

int main(){
    int tgt[3];

    for(int i=0;i<3;i++){
        cin >> tgt[i];
    }

    for(int i=0;i<3;i++){
        if(isExist(tgt[i])){
            cout << tgt[i] << ":" << "존재" << endl;
        }
        else{
            cout << tgt[i] << ":" << "미발견" << endl;
        }
    }

    return 0;
}