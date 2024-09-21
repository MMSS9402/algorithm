#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Node{
    string st;
    int a;
};

Node arr[4];
int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        
        int witch = i;
        if(i>=3){
            witch = 3;
        }
        cin >> arr[witch].st >> arr[witch].a;
        for(int x=witch;x>0;x--){
            if(arr[x-1].a<=arr[x].a){
                swap(arr[x-1],arr[x]);
            }
            else break;
        }
        for(int j=0;j<3;j++){
        cout << arr[j].st << " ";
        if(j==2) cout << endl;
        }

    }

    // for(int i=0;i<3;i++){
    //     cout << arr[i].st;
    // }


    return 0;
}