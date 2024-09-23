#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
string str;

int bs(int s, int e){
    int max = 0;
    while(s<=e){
        int mid = (s+e)/2;
        if(str[mid] == '#'){
            s = mid+1;
            if(mid>max){
                max = mid;
            }
        }
        if(str[mid] == '_'){
            e = mid-1;
        }
    }
    return (max+1);
}


int main(){
    cin >> str;

    cout << bs(0,str.length()-1)*100 / str.length() << "%";
    

    return 0;
}