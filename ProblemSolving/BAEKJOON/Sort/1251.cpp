//siver 5
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;

int main(){

    string str;
    cin >> str;
    int len = str.length();
    for(int i=1;i<=len-2;i++){
        string str1 = str.substr(0,i);
        reverse(str1.begin(),str1.end());
        for(int j=1;j<=len-i-1;j++){
            string str2 = str.substr(i,j);
            reverse(str2.begin(),str2.end());
            string str3 = str.substr(i+j,len-i-j);
            reverse(str3.begin(),str3.end());
            string temp = str1+str2+str3;
            v.push_back(temp);
        }
        

    }
    sort(v.begin(),v.end());

    cout << v[0];

    return 0;
}