#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
int arr1[3][3];
int arr2[3][3];
int temp[3][3];

int check(int a[3][3],int b[3][3]){
    int flag = 1;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j] != b[i][j]){
                flag = 0;
                return flag;
            }
        }
    }
    return flag;
}

int main(){
    

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr1[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr2[i][j];
        }
    }
    int k = 1;
    int flag = 1;
    while(flag){
        for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp[3-j-1][i] = arr1[i][j];
            }
        }

        for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr1[i][j] = temp[i][j];
            }
        }
        flag = check(arr1,arr2);
        cout << "flag:" << flag << endl;
        if(flag){
            flag = 0;
        } 
        else{
            k++;
            flag = 1;
            }
    }
    
    cout << k;
    
    return 0;
}