#include <iostream>
using namespace std;

int main(){
    char arr[10];
    cin >> arr;
    int len = 0;

    for(int i=0;i<10;i++){
        if(arr[i] == '\0'){
            len = i;
            break;
        }
    }

    char a,b;

    cin >> a >> b;

    for(int i=0;i<len;i++){
        if(arr[i] == a){
            arr[i] = b;
        }
    }
    cout << len << endl;
    cout << arr << endl;

    return 0;


}