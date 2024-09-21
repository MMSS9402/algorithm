#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n;

int compare(string t, string v){
    if(t.length()<v.length()) return 1;
    if(t.length()>v.length()) return 0;

    return t<v;
}


int main(){
    cin >> n;
    vector<string> name(n);
    for(int i=0;i<n;i++){
        cin >> name[i];
    }

    sort(name.begin(),name.end(),compare);

    for(int i=0;i<n;i++){
        cout << name[i] << endl;
    }
 
    return 0;
}