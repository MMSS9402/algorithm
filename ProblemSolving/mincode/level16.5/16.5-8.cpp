#include <iostream>
using namespace std;
char arr[2][6] = {
    {'A','7','9','T','Q','K'},
    {'M','I','N','C','O','D'}
};

int isExist(char a){
    for(int i=0;i<2;i++){
        for(int j=0;j<6;j++){
            if(arr[i][j] == a){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    char a,b;
    cin >> a >> b;

    if(isExist(a)) cout << a << " : " << "존재" << endl;
    else cout << a << " : " << "없음"<< endl;

    if(isExist(b)) cout << b << " : " << "존재" << endl;
    else cout << b << " : " << "없음"<< endl;

    return 0;
    
}