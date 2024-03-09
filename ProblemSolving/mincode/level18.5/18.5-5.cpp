#include <iostream>
using namespace std;

int main(){

    char arr[10] = "ATKPTCABC";


    char a,b;
    cin >> a >> b;

    int x,y;

    for(int i=0;i<10;i++){
        if(arr[i] == a){
            x = i;
            break;
        }
    }

    for(int i=9;i>=0;i--){
        if(arr[i] == b){
            y = i;
            break;
        }
    }

    cout << y-x;

    return 0;
}