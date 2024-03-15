#include <iostream>
using namespace std;

int arr[4][5] = {
    3,5,4,2,5,
    3,3,3,2,1,
    3,2,6,7,8,
    9,1,1,3,2
};

int x,y;
int path1[10];
int path2[10];

int isSum(int a, int b, int c){
    int sum = 0;

    for(int t=0;t<c;t++){
        int dx = a + path1[t];
        int dy = b + path2[t];

        if(dx>=0&&dy>=0&&dx<5&&dy<4){
            sum+=arr[dx][dy];
        }
    }

    return sum;
}


int main(){
    cin >> x >> y;
    int sum =0;
    int direct[4][2]={
        0,0,
        0,1,
        1,0,
        1,1
    };
    int k=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            path1[k] = i;
            path2[k] = j;
            k++;
        }
    }
    
    int max = 0;
    int maxx = 0;
    int maxy = 0;

    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(isSum(i,j,x*y) > max){
                max = isSum(i,j,x*y);
                maxx = i;
                maxy = j;
            }
        }
    }


    cout << "(" << maxx+1 << "," << maxy+1 << ")" ;//<< "sum" << max;
}