#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n;
vector<string> book;
int bs(int s, int e, string tgt){
    int mid = (s+e)/2;
    if(book[mid] == tgt){
        return 1;
    }
    if(book[mid] > tgt){
        return 0;
    }
    else{
        return -1;
    }
    
}

int main(){
    cin >> n;

    for(int i=0;i<n;i++){
        string temp;
        cin >> temp;
        book.push_back(temp);
    }

    sort(book.begin(),book.end());

    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        int start = 0;
        int flag = 0;
        int end = book.size()-1;
        string temp;
        int t;
        cin >> temp >> t;
        for(int j=0;j<t;j++){
            int mid = (start+end) /2;
            int ret = bs(start,end,temp);
            if(ret == 1){
                flag = 1;
                break;
            }
            else if(ret == -1){
                start = mid+1;
            }
            else if(ret == 0){
                end = mid - 1;
            }
        }
        if(flag){
            cout << "pass" << endl;
        }
        else cout << "fail" << endl;
        
    }



    return 0;
}

// 8
// BBB DDDDD EEEE aaa CCC bbbb ccc AAAA
// 7
// nothing 10
// DDDDD 1
// EEEE 3
// abcde 10
// aaa 2
// bbbb 2
// ccc 4