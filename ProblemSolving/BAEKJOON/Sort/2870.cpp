#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int n;
vector<string> v;

int main(){
    cin >> n;
    for(int k=0;k<n;k++){
        string str;
        cin >> str;
        int start = 0;
        int end = 0;
        int len = str.length();
        while(1){
            int cnt = 0;
            if(end>=len) break;
            for(int i=end;i<len;i++){
                if(str[i]>='0' && str[i]<='9'){
                    start = i;
                }
                cnt = 0;
                for(int j=i;j<len;j++){
                    if(!(str[j]>='0' && str[j]<='9')) break;
                    cnt++;
                }
            string temp = str.substr(start,cnt);
            cout << temp << endl;
            v.push_back(temp);
                
            }
            end = start+cnt+1;
            
            if(end>=len) break;


        }
    }

    return 0;
}