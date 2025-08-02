#include <iostream>
using namespace std;


int main(){

	int x;
	cin >> x;
	if(x>0){

		if(x>10){
			cout << x << " is greater than 10" << endl;
		}
		else if(x<10){
			cout << x << " is less than 10" << endl;
		}
		else{ // if(x == 10)
			cout << "x is exactly 10"
		}
	}
	return 0;	
}