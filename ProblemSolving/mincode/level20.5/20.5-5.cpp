#include <iostream>
using namespace std;

int main(){
    //A = 65, z = 90
    char a;
    cin >> a;

    for(int i = a-3;i<=a+3;i++){
        int t = i;
        if(i>90){
            t = i-26;
        }
        else if(i<65){
            t = i + 26;
        }

        cout << char(t);
    }

    
}