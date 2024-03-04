#include <iostream>
using namespace std;

int arr1[9] = {4,1,2,3,4,1,2,3,3};
int arr2[3] = {1,2,3};

int isSame(int idx){
    for(int i=0;i<3;i++){
        if(arr1[idx+i]!=arr2[i]){
            return 0;
        }
    }
    return 1;

}

int main(){

    int flag = 0;
    for(int i=0;i<6;i++){
        flag = isSame(i);
        if(flag) {
            cout<< "o";
            break;
        }

    }
    if (!flag) cout << "x";


    return 0;
}