#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char arr[10];

    char a,b;

    cin >> arr;
    cin >> a >> b;

    int len = strlen(arr);

    for(int i=0;i<len;i++){
        if(arr[i] == '\0') break;

        if(arr[i] == a || arr[i] ==b){
            //cout << i << arr[i-1] << arr[i+1] << endl;
            arr[i-1] = '#';
            arr[i+1] = '#';
            //cout << i << arr[i-1] << arr[i+1] << endl;
        }

    }

    for(int i=0;i<len;i++){
        cout << arr[i];
    }

    return 0;
}