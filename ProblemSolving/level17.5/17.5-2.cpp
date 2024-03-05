#include <iostream>
using namespace std;

int arr[6] = {3,7,4,1,2,6};

int isExist(int a){
    for(int i=0;i<6;i++){
        if(a == arr[i]) return 1;
    }

    return 0;
}

int main(){

    int univer[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> univer[i][j];
        }
    }    

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(isExist(univer[i][j])) cout << "OK" << " ";
            else cout << "NO" << " ";
        }
        cout << endl;
    }



    return 0;
}