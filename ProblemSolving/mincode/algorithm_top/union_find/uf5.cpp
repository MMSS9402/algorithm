#include <iostream>
using namespace std;

int arr[1000001];
int myBoss[1000001];
int groupCnt[1000001];
int cnt = 0;
int find(int n){
    if(myBoss[n] == -1){
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
    // cout << "t" << t1 << " " << t2 << " " << find(t1) << " " << find(t2) << endl;
    myBoss[t2] = t1;
    groupCnt[t1] += groupCnt[t2];
    groupCnt[t2] = 0;
    cnt--;
    
}

int main(){
    int directx[3] = {-1,0,1};
    int width,N;
    cin >> width >> N;
    for(int i=0;i<width;i++){
        groupCnt[i] = 1;
        myBoss[i] = -1;
    }
    int maxi = -999;
    for(int i=0;i<N;i++){
        cnt++;
        int a;
        cin >> a;
        arr[a] = 1;
        for(int t=0;t<3;t++){
            int dx = a + directx[t];
            if(dx<0||dx>width) continue;
            if(arr[dx] == 0) continue;
            arr[dx] = 1;
            setUnion(a,dx);
            if(groupCnt[find(a)]> maxi){
                maxi = groupCnt[find(a)];
            }
        }
        cout << cnt << " " << maxi <<'\n';
    }
    // for(int i=0;i<width;i++){
    //     cout << myBoss[i] << " ";
    // }

    return 0; 
}