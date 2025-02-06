#include <iostream>
#include <vector>
using namespace std;

int slide(vector<int> v, int size){
    int dat[101] = {0};
    // cout << "ssss" << size ;
    for(int i=0;i<size;i++){
        dat[v[i]]++;
        // cout << v[i] << '#' << dat[v[i]] << '\n';
        if(dat[v[i]]>2){
            return -1;
        }
    }
    for(int i=0;i<=v.size();i++){
        // cout << v[i+size-1] << '#' << dat[v[i+size-1]] << " i: "<< i << '\n';
        // if(dat[v[i+size-1]]>2){
        //     return -1;
        // }
        if(i==v.size()) break;

        dat[v[i]]--;
        int t = 0;
        if(i+size<=v.size()-1){
            dat[v[i+size]]++;
            if(dat[v[i+size]]>2){
                return -1;
            }
        }
        else{
            dat[v[i+size-v.size()]]++;
            if(dat[v[i+size-v.size()]]>2){
                return -1;
            }
        }
    }
    return 1;  

}

int main(){

    int T;
    cin >> T;

    for(int i=0;i<T;i++){
        int N,R;
        cin >> N >> R;
        vector<int> v;
        for(int i=0;i<N;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }

        int ret = slide(v,R*2+1);
        if(ret !=-1) cout << '#' << i+1 << " " << "YES\n";
        else if (ret == -1) cout << '#' << i+1 << " " << "NO\n";


    }

    return 0;
}

