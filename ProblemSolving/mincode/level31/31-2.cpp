#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int arr[100000];

int isFour(int size){
    int sum =0;
    for(int i=0;i<4;i++){
        sum+=arr[i];
    }

    int min = sum;

    int limit = size - 3;
    for(int i=0;i<limit;i++){
        if(sum<min){
            min = sum;
        }
        if(i == limit) break;
        sum-=arr[i];
        sum+=arr[i+4];
    }

    return min;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ret = isFour(n);
    cout << ret;



    return 0;
}