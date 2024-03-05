#include <iostream>
using namespace std;

char arr[6] = "MTKC";

int isExist(char a){
    for(int i=0;i<6;i++){
        if(arr[i] == a) return 1;
    }
    return 0;
}



int main(){

    char x;
    cin >> x;

    if(isExist(x)) cout << "발견";
    else cout << "미발견";

    return 0;
}