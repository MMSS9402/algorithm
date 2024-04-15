#include <iostream>
#include <string>
using namespace std;

string str;


int main(){
    cin >> str;
    if(str[0]!='-') str.insert(0,"+");
    int sum = 0;

    int a = 0;
    int b = 0;
    while(1){
        a = str.find('+',a);
        b = str.find('-',b);
        // cout << "a" << a << " " << "b" << b << endl;
        if(a==-1){
            int temp = stoi(str.substr(b+1,str.length()));
            // cout << temp << endl;
            sum-=temp;
            break;
        }
        if(b==-1){
            int temp = stoi(str.substr(a+1,str.length()));
            // cout << temp << endl;
            sum+=temp;
            break;
        }
        if(a<b){
            
            int temp = stoi(str.substr(a+1,str.length()));
            // cout << temp << endl;
            sum+=temp;
            a +=1;
        }

        if(b<a){
            int temp = stoi(str.substr(b+1,str.length()));
            // cout << temp << endl;
            sum-=temp;
            b+=1;
        }

    }

    cout << sum;

    return 0;
}