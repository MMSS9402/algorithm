#include <iostream>
using namespace std;

int main(){

    char arr[10];

    cin >> arr;

    int direct[200] = {0};

    for(int i=0;i<10;i++){
        direct[arr[i]]++;
    }

    for(int i=0;i<200;i++){
        if(i == '\0') continue;
        if(direct[i] !=0){
            cout << char(i) << ":" << direct[i] << endl;
        }
    }

    return 0;
}