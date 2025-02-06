#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// N개의 매점, 매점마다 T 조리시간이 걸림
// M명의 관객이 음식을 주문하고 수령하는데까지 걸리는 시간
int N;
long long M;
vector<int> v;

int check(int x){
    for(int i=0;i<v.size();i++){
        x = x%v[i];
        if(x==0) break;
    }
    if(x == 0){
        return 1;
    }
    return -1;
}

int bs(int start, int end){
    int min = M*v[v.size()-1];
    while(start<=end){
        int mid = (start+end)/2;
        int flag = check(mid);
        if(flag){
            end = mid-1;
            if(mid<min){
                min = mid;
                cout << mid << " " << start << " " << end << endl;
            }
        }
        else{
            cout << start << " " << end << endl;
            start = mid+1;
        }
    }
    return min;
}


int main(){

    cin >> N >> M;

    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    int result = bs(0,v[v.size()-1]*M);

    cout << result;

    



    return 0;
}

// 3 10
// 1
// 2
// 10