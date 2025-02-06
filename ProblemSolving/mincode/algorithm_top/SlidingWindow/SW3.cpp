#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

struct Node{
    int startIdx;
    int max;

};

Node slide(int size){
    int sum = 0;
    Node temp;
    temp.max = -99;
    temp.startIdx = 0;
    // temp.size = size;
    for(int i=0;i<size;i++){
        sum += v[i];
    }

    for(int i=0;i<=v.size()-size;i++){
        if(sum>temp.max){
            temp.max = sum;
            temp.startIdx = i;
        }
        if(i == v.size()-size) break;

        sum -= v[i];
        sum += v[i+size];
    }

    return temp;
}

int getSum(int startIdx,int size){
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum += v[startIdx+i];
    }
    return sum;
}

int main(){

    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n;
    cin >>n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int max = -99;
    int startIdx = 0;
    int size = 0;
    for(int i=1;i<=v.size();i++){
        Node temp = slide(i);
        if(temp.max>max){
            max = temp.max;
            startIdx = temp.startIdx;
            size = i;
        }

    }

    cout << max << '\n';
    cout << startIdx << " " << startIdx+size-1;
    

    return 0;
}