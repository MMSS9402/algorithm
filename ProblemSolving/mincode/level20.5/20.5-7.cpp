#include <iostream>
#include <cstring>
using namespace std;

char arr[10];
int len;
void run(int lev){
    if(lev == len){
        return;
    }

    for(int i=0;i<=lev;i++){
            cout << arr[i];
        }
    cout << endl;
    
    run(lev+1);
}

int main(){

    cin >> arr;
    len = strlen(arr);

    run(0);
    return 0;
}