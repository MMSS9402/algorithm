#include <iostream>
using namespace std;

int arr1[4];
int arr2[4];
int Result[8];

void run(int lev1,int lev2,int lev3){
    if(lev3 == 7) {
        if(lev1 == 4){
            Result[lev3] = arr2[lev2];
        }
        if(lev2 == 4){
            Result[lev3] = arr1[lev1];
        }
        return;
    }

    if(arr1[lev1]>=arr2[lev2] && lev2<4 && lev1<4){
        Result[lev3] = arr2[lev2];
        lev2++;
        lev3++;
    }
    else{
        Result[lev3] = arr1[lev1];
        lev1++;
        lev3++;
    }
    
    run(lev1,lev2,lev3);
    

}


int main(){

    for (int i=0;i<4;i++){
        cin >> arr1[i];
    }
    for (int i=0;i<4;i++){
        cin >> arr2[i];
    }
    run(0,0,0);

    for(int i=0;i<8;i++){
        cout << Result[i] << " ";
    }

    return 0;
}