#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int arr[6] = {1,5,4,2,-5,-7};
vector<int> s;

int main(){
    int n;
    cin >> n;

    int min = 999;
    int k = 0;
    while(k<=6){
        for(int i=k;i<6;i++){
            if(arr[i]<min){
                min = arr[i];
            }
        }
        s.push_back(min);
        k++;
        min = 999;
    }
    for(int i=0;i<s.size();i++){
        cout << s[i];
    }



    return 0;
}