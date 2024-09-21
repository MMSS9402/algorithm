#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
struct Node{
    int a;
    string name;
};
int direct[100];
Node arr[100];
int main(){
    int n;
    int p;
    cin >> n >> p;

    for(int i=0;i<p;i++){
        cin >> arr[i].a >> arr[i].name;
        direct[arr[i].a]++;
    }
    int max = 0;
    int maxIdx = 0;
    for(int i=0;i<n;i++){
        if(direct[i] == 0 ) continue;
        if(direct[i]>max){
            max = direct[i];
            maxIdx = i;
        }
    }

    for(int i=0;i<p;i++){
        if(arr[i].a == maxIdx){
            cout << arr[i].name << " ";
        }
    }



    return 0;
}