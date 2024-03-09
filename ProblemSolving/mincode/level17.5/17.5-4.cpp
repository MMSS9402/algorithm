#include <iostream>
using namespace std;

char arr[2][4] ={
    "GKT",
    "PAC"
};
int isExist(char x){
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            if(x == arr[i][j]){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    char a,b;

    cin >> a >> b;

    if(isExist(a)==1 && isExist(b)==1){
        cout << "대발견";
    }
    else if(isExist(a)==1 || isExist(b)==1){
        cout << "중발견";
    }
    else cout << "미발견";

    return 0;
}