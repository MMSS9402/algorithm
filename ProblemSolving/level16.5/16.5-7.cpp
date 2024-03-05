#include <iostream>
using namespace std;

int arr[7][4];

int main(){
    int k = 1;
    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            arr[i][j] = k;
            k++;
        }
    }

    int a,b,c;
    cin >> a >> b >> c;

    for(int i=0;i<4;i++){
        arr[a][i] = 0;
        arr[b][i] = 0;
        arr[c][i] = 0; 
    }

    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}