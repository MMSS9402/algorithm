#include <iostream>
using namespace std;

int arr[7];



void run(int lev){
    
}


int main(){

    for(int i=0;i<7;i++){
        cin >> arr[i];
    }


    for(int j=3;j<7;j++){
        for(int k=0;k<=j;k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    

}