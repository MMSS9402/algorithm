#include <iostream>
using namespace std;

int arr[3][3] = {
    3,5,9,
    4,2,1,
    1,1,5
    };

int main(){

    int sum = 0;

    int ccc[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> ccc[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(ccc[i][j] == 1){
                sum += arr[i][j];
            }
        }
    }

    cout << sum;

    return 0;

}