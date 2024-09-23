#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string map[3] = {
    "ABCEFG",
    "HIJKLM",
    "NOPQRS"
};

int used[3][6];


int main(){

    int direct[5][2] = {
        0,0,
        1,0,
        0,1,
        -1,0,
        0,-1
    };
    string str;
    cin >> str;

    for(int i=0;i<str.length();i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<6;k++){
                if(str[i] == map[j][k]){
                    for(int t=0;t<5;t++){
                        int dx = j+direct[t][0];
                        int dy = k+direct[t][1];
                        if(dx>=0&&dx<3&&dy>=0&&dy<6){
                            used[dx][dy]+=1;
                        }
                    }
                }
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            if(used[i][j] == 0){
                cout << map[i][j];
                continue;
            }
            if(used[i][j] %2 !=0){
                cout << '#';
                continue;
            }
            if(used[i][j]%2 == 0){
                cout << map[i][j];
                continue;
            }
        }
        cout << endl;
    }




    return 0;
}