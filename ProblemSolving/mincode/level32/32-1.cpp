#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Node{
    int a;
    char ch;
};

int compare(Node t, Node v){
    if(t.a<v.a) return 1;
    if(t.a>v.a) return 0;
    
    if(t.a == v.a){
        return t.ch<v.ch;
    }
}


int main(){
    Node arr[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i].a >> arr[i].ch;
    }
    sort(arr,arr+n,compare);

    for(int i=0;i<n;i++){
        cout << arr[i].a << " " << arr[i].ch << endl;
    }


    return 0;
}