#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
struct Node
{
    int x;
    int y;
    vector<char> v;
};

Node arr[9];
int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string temp;
        cin >> arr[i].x >> arr[i].y >> temp;
        int len = temp.length();
        for(int j=0;j<len;j++){
            char ch = temp[j];
            arr[i].v.push_back(ch);
        }
    }
    // cout << endl;
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        int p;
        cin >> p;
        for(int i=0;i<n;i++){
            int size = arr[i].v.size();
            if(size == 1 && arr[i].v[size-1] == '0') continue;
            if((arr[i].v[size-1]-'0') - p <= 0){
                // cout << arr[i].x << " " << arr[i].y << endl;
                // cout << arr[i].v[size-1]-'0' << endl;
                if(size >1)arr[i].v.pop_back();
                else arr[i].v[0] = '0';
                // cout << "after : " << arr[i].v[0] << endl;
            }
            if((arr[i].v[size-1]-'0')-p>0){
                arr[i].v[size-1] = '0' + ((arr[i].v[size-1]-'0') - p);
                // cout << arr[i].x << " " << arr[i].y << endl;
                // cout << "second : " << arr[i].v[size-1] << endl;
            }
        }
    }
    int sum = 0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<arr[i].v.size();j++){
    //         cout << arr[i].v[j];
    //     }
    //     cout << endl;
    // }
    for(int i=0;i<n;i++){
        if(arr[i].v.size()==1 && arr[i].v[0]=='0') continue;
        sum+=arr[i].v.size();
    }

    cout << sum;


    return 0;
}

// 3 0 0 1 0