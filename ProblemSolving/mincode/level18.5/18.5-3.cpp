#include <iostream>
using namespace std;

int main(){

    char arr[10];

    cin >> arr;

    int direct[200] = {0};

    for(int i=0;i<10;i++){
        if(arr[i] == '\0') break;
        direct[arr[i]]++;
    }
    int max = 0;
    int maxvalue = 0;
    for(int i=0;i<200;i++){
        if (direct[i] == 0) continue;
        if(direct[i] > maxvalue){
            maxvalue = direct[i];
            max = i;
        }
    }
    cout << char(max);

    return 0;
}