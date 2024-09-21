#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int check(string str){
    int flag = 1;
    if(str[0]>='A' && str[0]<='Z'){
        for(int i=1;i<str.length()-1;i++){
            if(str[i+1]>='A' && str[i+1]<='Z' && str[i]>='a' && str[i]<='z'){
                return 0;
            }
            if(str[i]>='A' && str[i]<='Z' && str[i+1]>='a' && str[i+1]<='z'){
                return 0;
            }
            
        }
    }
    return 1;
}
int n;
int main(){
    cin >> n;
    vector<string> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i][0]>='a' && v[i][0]<='z'){
            v[i][0]-=32;
        }
    }

    for(int i=0;i<n;i++){
        if(check(v[i]) == 1) continue;
        else if (check(v[i]) == 0){
            for(int j=0;j<v[i].size();j++){
                if((v[i][j]>='a' && v[i][j]<='z')){
                    v[i][j]-=32;
                }
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout << v[i] << endl;
    }
    return 0;
}