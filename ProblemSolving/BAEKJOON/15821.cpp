//silver3
//N : 낚시거리
//K : 유효낚시터
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

vector<long double> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,K;
    cin >> N >> K;
    int originx = 0;
    int originy = 0;

    for(int i=0;i<N;i++){
        //p는 꼭지점 수
        int p;
        cin >> p;
        long double maxi = 0;
        for(int j=0;j<p;j++){
            long long x, y;
            cin >> x >> y;
            long double r;
            r = pow(x,2)+pow(y,2);
            maxi = max(maxi,r);

        }
        // cout << maxi << " " << endl;
        v.push_back(maxi);
        
    }
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    
    cout << fixed;
    cout.precision(2);
    // cout << N << endl;
    cout << v[K-1];

    


    return 0;
}