#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp;
    string str[100];
    vector<int> v;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin >> str[i];
        if(str[i] == "push"){
            cin >> temp;
            v.push_back(temp);
        }
        if(str[i].find("printLast")!=-1){
            arr.push_back(v[v.size()-1]);
        }
        if(str[i].find("pop")!=-1){
            v.pop_back();
        }
        
    }
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << endl;
    }


    return 0;
}