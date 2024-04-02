#include <iostream>
#include <string>
using namespace std;
int n;

int isValid(string str){

    int a = -1;
    int b = 0;
    while(1){
        a = str.find('<',a+1);
        if(a == -1) break;
        b = str.find('>',a+1);
        string temp = str.substr(a,b-a+1);
        // cout <<temp << endl;
        //temp에 중복된 글자가 있으면 0 출력
        for(int i=0;i<temp.length();i++){
            for(int j=i;j<temp.length();j++){
                if(i==j) continue;
                if(temp[i] == temp[j]) return 0;
            }
        }
    }


    return 1;
}

int main(){
    cin >> n;
    string str[n];

    for(int i=0;i<n;i++){
        cin >> str[i];
    }

    for(int i=0;i<n;i++){
        int flag  = isValid(str[i]);
        if(flag) cout << "O";
        else cout << "X";
    }



    return 0;
}