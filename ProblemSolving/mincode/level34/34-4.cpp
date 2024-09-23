#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

char map[1000][1000];
int n;

int xbs(int start,int end){
    int max = 0;
    while(start<=end){
        int mid = (start+end) / 2;
        if(map[mid][0] == '#'){
            start = mid+1;
            if(mid>max) max = mid;
        }
        if(map[mid][0] == '0'){
            end = mid-1;
        }
    }
    return max;

}
int ybs(int start,int end, int x){
    int max = 0;
    while(start<=end){
        int mid = (start+end) / 2;
        if(map[x][mid] == '#'){
            start = mid+1;
            if(mid>max) max = mid;
        }
        if(map[x][mid] == '0'){
            end = mid-1;
        }
    }
    return max;

}

int main(){

    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }

    int x = xbs(0,n-1);
    int y = ybs(0,n-1,x);

    cout << x << " " << y;





    return 0;
}