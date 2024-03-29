#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "753(642)RS(736)(51)+(7)";
    int end = -1;
    int sum = 0;
    while(1){
        int start = str.find('(',end+1);
        end = str.find(')',start);
        int arr = stoi(str.substr(start+1,end-start-1));
        // cout << str.substr(start+1,end-start-1) << endl;;
        if(start == -1 && end == -1){
            break;
        }
        sum += arr;
        
    }   

    cout << sum;

}