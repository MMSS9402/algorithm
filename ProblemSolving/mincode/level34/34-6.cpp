#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

priority_queue<int,vector<int>,greater<int>> q;
priority_queue<int,vector<int>,greater<int>> rock;


int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        q.push(x);
    }
    int cnt = 0;
    int last = 0;
    while(1){
        if(q.empty()) break;
        if((!rock.empty())){
            if(rock.top()<q.top()){
                break;
            }
        }
        if((cnt!=0 && cnt%2 == 0)){
            int x = 2*last;
            rock.push(x);
        }
        if((!rock.empty())){
            if(rock.top()>=q.top()){
                last = q.top();
                q.pop();
                cnt++;
                continue;
            }
        }
        if(rock.empty()){
            last = q.top();
            q.pop();
            cnt++;
        }
        
    }
    cout << cnt;




    return 0;
}