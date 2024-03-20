#include <iostream>
using namespace std;

char arr[4][3];

int main(){
    
    for(int i=0;i<4;i++){
        cin >> arr[i];
    }

    for(int k=0;k<2;k++){
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                if(arr[i][j] != '_' && arr[i+1][j] == '_'){
                    char temp = arr[i][j];
                    arr[i][j] = arr[i+1][j];
                    arr[i+1][j] = temp;
                }
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    


    return 0;
}