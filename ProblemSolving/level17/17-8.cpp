#include <iostream>
using namespace std;

char vect[7] = {"BTKIGZ"};




int main(){
    char target[5];

    cin >> target;

    int sum =0;

    for(int i=0;i<4;i++){
        for(int j=0;j<7;j++){
            if(vect[j] == target[i]){
                sum++;
            }
        }
    }
    cout << sum;
}