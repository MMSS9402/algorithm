#include <iostream>
#include <string>
#include <vector>
using namespace std;

int slide(vector<int> v,int size, int max){
    int sum = 0;
    int cnt = 0;
    for(int i=0;i<size;i++){
        sum+=v[i];
    }
    if(v.size()==size){
        if(sum<max) cnt++;
        return cnt;
    }
    // if(sum<max) cnt++;
    for(int i=0;i<v.size();i++){
        // cout << "sum : " << sum << '\n';
        if(sum<max) cnt++;
        // if(i == v.size()) break;
        sum -= v[i];

        if(i+size>v.size()-1){
            sum += v[i+size-v.size()];
        }
        else{
            sum += v[i+size];
        }
        // if(sum<max) cnt++;
    }
    return cnt;
    

}

int main(){

    int n,m;
    long long p;
    vector<int> v;
    cin >> n >> m >> p;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int ret = slide(v,m,p);

    cout << ret ;

    return 0;  
}