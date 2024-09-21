#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main(){

    vector<int> arr = {3,1,5,2,6,8};

    sort(arr.begin(),arr.end());

    for(auto i = arr.begin(); i !=arr.end(); ++i){
        cout << *i << " ";
    }

    return 0;
}