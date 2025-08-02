#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

struct Node{
    int x,y,r;

};


int parent[3001];

int perCnt[3001];

int check(int x1,int y1,int x2,int y2, int tgt){
    int x = (x2-x1);
    int y = (y2-y1);
    int d = pow(x,2)+pow(y,2);
    tgt = pow(tgt,2);
    if(d<=tgt){
        return 1;
    }
    else{
        return 0;
    }
}

int Find(int n){
    if(parent[n] ==n){
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
    perCnt[t1] +=perCnt[t2];
    perCnt[t2] = 0;
    
}

int main(){

    int t;
    cin >> t;
    
    for(int i=0;i<t;i++){
        int n;
        int cnt = 0;
        vector<Node> v;
        cin >> n;
        for(int j=0;j<n;j++){
            parent[j] = j;
            perCnt[j] = 1;
        }
        for(int j=0;j<n;j++){
            int x,y,r;
            cin >> x >> y >> r;
            v.push_back({x,y,r});
        }

        for(int j=0;j<v.size();j++){
            for(int k=j;k<v.size();k++){
                if(j==k) continue;
                
                int flag = check(v[j].x,v[j].y,v[k].x,v[k].y,v[j].r+v[k].r);
                if(flag == 1){
                    if(Find(j) != Find(k)){
                        setUnion(j,k);

                    }
                }

            }
        }
        for(int j=0;j<v.size();j++){
            if(perCnt[j]==0) continue;
            cnt++;
        }
        cout << cnt << '\n';
        
        

    }


    return 0;
}