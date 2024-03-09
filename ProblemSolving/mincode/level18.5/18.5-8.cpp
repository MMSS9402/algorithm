#include <iostream>
using namespace std;

int main(){

    char arr1[10];
    char arr2[10];
    char arr3[10];

    cin >> arr1;
    cin >> arr2;
    cin >> arr3;

    int direct[200] = {0};

    for(int i=0;i<10;i++){
        if(arr1[i] == '\0') break;
        direct[arr1[i]]++;
    }

    for(int i=0;i<10;i++){
        if(arr2[i] == '\0') break;
        direct[arr2[i]]++;
    }

    for(int i=0;i<10;i++){
        if(arr3[i] == '\0') break;
        direct[arr3[i]]++;
    }
    int flag = 1;
    for(int i=0;i<200;i++){
        if(i == '\0') continue;
        if(direct[i]>=2) {
            flag = 0; 
            break;
        }
    }
    if(flag) cout << "Perfect";
    else cout << "No";

    return 0;
}