#include <iostream>
#include <vector>
#include <string>
using namespace std;
int n;
string tgt = "HITSMUSIC";
int cnt = 0;
int main(){
    cin >> n;
    string str[n];
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            string temp = str[i] + str[j];
            if(temp == tgt){
                cnt++;
            }

        }
    }
    cout << cnt;


    return 0;
}