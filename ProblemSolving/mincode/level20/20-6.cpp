#include <iostream>
using namespace std;

int a,b;

void run(int lev){
    if(lev == b){
        cout << lev << " ";
        return;
    }
    cout << lev << " ";
    run(lev+1);
    cout << lev << " ";

}

int main(){
    
    cin >> a >> b;

    run(a);

    return 0;
}