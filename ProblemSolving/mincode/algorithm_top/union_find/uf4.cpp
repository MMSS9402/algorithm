#include <iostream>
#include <string>
using namespace std;
int myBoss[26];
int price[26];
int groupCnt[26];

int find(int n){
    if(myBoss[n] == 0) {
        return n;
    }
    int ret = find(myBoss[n]);
    myBoss[n] = ret;
    return ret;
}

void setUnion(int a, int b){
    int t1 = find(a);
    int t2 = find(b);
    if(t1 == t2) return;
    myBoss[t2] = t1;
    price[t1-'A'] += price[t2-'A'];
    price[t2-'A'] = 0;
    groupCnt[t1-'A'] += groupCnt[t2-'A'];
    groupCnt[t2-'A'] = 0;
}



int main(){
    
    int k;
    cin >> k;

    for(int i=0;i<k;i++){
        cin >> price[i];
        groupCnt[i] = 1;
    }


    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        string str;
        char a, b;
        cin >> str >> a >> b;
        if(str == "alliance"){
            setUnion(a,b);
        }

        if(str == "war"){
            if(price[a-'A'] > price[b-'A']){
                price[b-'A'] = 0;
                k-=groupCnt[b-'A'];
            }
            else if(price[a-'A'] == price[b-'A']){
                price[a-'A'] = 0;
                price[b-'A'] = 0;
                k-=groupCnt[a-'A'];
                k-=groupCnt[b-'A'];
            }
            else{
                price[a-'A'] = 0;
                k-=groupCnt[a-'A'];
            }
        }
    }

    cout << k;

    return 0;
}