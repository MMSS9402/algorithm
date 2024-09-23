#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
char bs(int start, int end , int tgt){
    
    while(start<=end){
        int mid = (start+end) / 2;
        if(v[mid] == tgt) {
            return 'O'; 
        }
        if(v[mid] < tgt){
            start = mid+1;
        }
        else end = mid-1;
    }
    return 'X';

}


int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());


    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        int a;
        cin >> a;
        cout << bs(0,v.size()-1,a) << " ";
    }


    return 0;
}
// 9
// 1 4 2 15 6 3 2 -43 1
// 5
// 20 3 4 -22 -43
