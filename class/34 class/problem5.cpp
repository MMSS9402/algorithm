#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string str = "##########______";

int bs(int s, int e){
    int max = -1;
    while(s<=e){
        int mid = (s+e)/2;
        // if(str[mid] == '#'&&str[mid+1] == '_'){
        //     return mid;
        // }
        if(str[mid] == '#'){
            s = mid+1;
            if(max<mid) max = mid;
        }
        else{
            e = mid - 1;
        }
    }

    return max;
}



int main(){
    // cin >> str;
    int idx = bs(0,str.length()-1)+1;
    int total = str.length();
    cout << idx*100/total << "%";


    return 0;
}