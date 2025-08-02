#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

#include <algorithm>

using namespace std;
unordered_map<string,int> um;

int parent[100001];
string DAT[100001];

vector<string> v;

int Find(int n){
    if(parent[n] == n){
        return n;
    }
    int ret = Find(parent[n]);
    parent[n] = ret;
    return ret;
}

void setUnion(int a, int b){
    int t1 = Find(a);
    int t2 = Find(b);
    if(t1 == t2) return;
    parent[t2] = t1;
}

int main(){

    int N;
    cin >> N;

    for(int i=0;i<2*N;i++){
        parent[i] = i;
    }
    int num = 0;
    for(int i=0;i<N;i++){

        string a,b;
        cin >> a >> b;
        if(um.find(a) == um.end()){
            um[a] = num;
            DAT[num] = a;
            num++;
        }
        if(um.find(b) == um.end()){
            um[b] = num;
            DAT[num] = b;
            num++;
        }
        if(Find(um[a]) == Find(um[b])) continue;

        setUnion(um[a],um[b]);
    }

    string target;
    cin >> target;

    for(int i=0;i<num;i++){
        if(Find(i) == Find(um[target])){
            v.push_back(DAT[i]);
        }
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout << v[i] << '\n';
    }

    return 0;
}