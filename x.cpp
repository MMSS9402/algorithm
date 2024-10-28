#include <iostream>
#include <string>
using namespace std;

int main(){

    string str1 = "ABABABACABBAABBC";
    string str2 = "AB";

    int a = -1;
    int cnt = 0;
    while(1){
        a = str1.find(str2,a+1);
        cout  << a << endl;
        if(a == -1) break;
        cnt++;
    }
    cout << cnt;

    return 0;
}