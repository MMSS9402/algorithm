#include <iostream>
#include <vector>
#include <string>
using namespace std;

int ppp(int k){
    k = 2*k;
    string tgt = to_string(k);
    // cout << tgt << endl;
    string temp;
    for(int i=tgt.length()-1;i>=0;i--){
        temp += tgt[i];
    }
    
    int result = stoi(temp);
    return result;
}


int main(){

    int p,n;
    cin >> p >> n;
    int ret = p;
    for(int i=0;i<n;i++){
        ret = ppp(ret);
    }
    cout << ret;

    return 0;
}