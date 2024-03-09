#include <iostream>
using namespace std;

int vect[3][3] = {
    3,7,4,
    2,2,4,
    2,2,5
};

int isExist(int a){
    int cnt = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a == vect[i][j]){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int target[3];

    for(int i=0;i<3;i++){
        cin >> target[i];
    }

    int max = 0;
    int maxcnt = 0;
    for(int i=0;i<3;i++){
        if(isExist(target[i]) > maxcnt){
            max = target[i];
            maxcnt = isExist(target[i]);
        }
    }

    cout << max;

    
    
    return 0;
}