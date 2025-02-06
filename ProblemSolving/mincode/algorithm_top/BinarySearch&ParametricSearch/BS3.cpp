#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int bs(int start, int end,string str){
    int result = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(str[mid] == '#'){
            start = mid+1;
            result = mid;
        }
        else if(str[mid] == '_'){
            end = mid-1;
        }
    }
    return result;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        string str;

        cin >> str;
        sort(str.begin(),str.end());

        int ret = bs(0, str.length()-1,str);
        if(ret == -1 ){
            cout << "0%\n";
        }
        else    cout << (ret+1)*100/str.length() << "%\n";


    }

    


    return 0;
}