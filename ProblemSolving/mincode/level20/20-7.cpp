#include <iostream>
using namespace std;

int arr[8] = {3,7,4,1,9,4,6,2};


void run(int lev){
    if(lev == 0){
        cout << arr[lev] << " ";
        return;
    }
    cout << arr[lev] << " ";
    run(lev-1);
    cout << arr[lev] << " ";

}



int main(){
    int index;
    

    cin >> index;

    run(index);

    return 0;
}