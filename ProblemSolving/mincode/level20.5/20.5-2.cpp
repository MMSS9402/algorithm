#include <iostream>
#include <cstring>
using namespace std;

char arr[10];
int len;
void run(int lev){
    if(lev==len){

        return;
    }

    run(lev+1);
    for(int i=lev;i<len;i++){
        cout << arr[i];
    }
    cout << endl;
}

int main(){
    cin >> arr;
    
    len = strlen(arr);

    run(0);
    return 0;
}