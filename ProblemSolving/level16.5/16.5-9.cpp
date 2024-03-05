#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    char c;
    cin >> c;
    for(int k=0;k<2;k++){
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout << c;
            }
            cout << endl;
        }
    cout << endl;
    }
    return 0;
}