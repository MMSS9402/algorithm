#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;
    int start = 1;
    int end = 2;
    int flag = 1;
    for(int i=0;i<n;i++){
        int t;
        string temp;
        cin >> t >> temp;
        if(start>end) flag = 0;
        if(temp == "DOWN"){
            end = t-1;
        }
        else{
            start = t+1;
        }
        if(start == end) flag = -1;
    }
    if(flag == 1){
        cout << start << " ~ " << end;
    }
    else if(flag == 0){
        cout << "ERROR";
    }
    else if(flag == -1){
        cout << start;
    }



    return 0;
}