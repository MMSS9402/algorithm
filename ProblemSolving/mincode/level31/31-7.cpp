#include <iostream>
#include <vector>
#include <string>
using namespace std;

string str[20];
int used[20];
string tgt[20];


int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str[i];
    }

    for(int i=0;i<n;i++){
        int min = 999;
        int minidx = 0;
        for(int j=0;j<n;j++){
            if(str[j].length()<min && used[j] == 0){
                min = str[j].length();
                minidx = j;
            }
            if(str[j].length()==min && used[j] == 0){
                if(str[j]<str[minidx]){
                    min =str[j].length();
                    minidx = j;
                }
            }
        }
        used[minidx] = 1;
        tgt[i] = str[minidx];

    }

    for(int i=0;i<n;i++){
        cout << tgt[i] << endl;
    }



    return 0;
}