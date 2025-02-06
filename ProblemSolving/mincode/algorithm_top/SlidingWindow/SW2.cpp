#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        int N,W;
        cin >> N >> W;
        vector<int> v;
        for(int j=0;j<N;j++){
            int x;
            cin >> x;
            v.push_back(x);
        }

        int sum = 0;
        for(int j=0;j<W;j++){
            sum+=v[j];
        }
        int max =-99;
        int startIdx = 0;
        int endIdx;
        for(int k=0;k<=v.size()-W;k++){
            if(sum>max){
                max = sum;
                startIdx = k;
                endIdx = k+W-1;
            }
            if(k == v.size()-W){
                break;
            }
            sum -= v[k];
            sum += v[k+W];
        }
        cout << '#' << i+1 << " " << startIdx << " " << endIdx << " " << max << '\n';
    
    }


    return 0;
}