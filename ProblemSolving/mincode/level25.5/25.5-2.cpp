#include <iostream>
using namespace std;

int main(){

    string str;
    cin >> str;
    int a = 0;
    int b = 0;

    int result = 0;

    while(1){
        a = str.find('[',a);
        b = str.find('{',b);
        if(a==-1&&b==-1) break;
        if(a==-1){
            int temp = stoi(str.substr(b+1,str.length()));
            result*=temp;
            b+=1;
            continue;
            
        }
        if(b==-1){
            int temp = stoi(str.substr(a+1,str.length()));
            result+=temp;
            a+=1;
            continue;
            
        }
        if(a<b){
            int temp = stoi(str.substr(a+1,str.length()));
            result+=temp;
            a+=1;
        }
        if(b<a){
            int temp = stoi(str.substr(b+1,str.length()));
            result*=temp;
            b+=1;
        }
    }
    cout << result;

    return 0;
}