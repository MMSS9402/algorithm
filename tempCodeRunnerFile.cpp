#include <iostream>

using namespace std;

void doSomething(int arr[20]){
	cout << (long long)&(arr)<< endl;
	cout << arr[1]<< endl;
	cout << arr[2]<< endl;

	cout << "size in doSometing function : " << sizeof(arr) << endl; 

 }

int main(){

	int students_scores[20] = {1,2,3,4,5,};

	cout << (long long)students_scores << endl;
	cout << (long long)&students_scores << endl;
	cout << (long long)&(students_scores[0]) << endl;
	cout << (long long)&(students_scores[1]) << endl;
	cout << (long long)&(students_scores[2]) << endl;
	cout << (long long)&(students_scores[3]) << endl;



	cout <<sizeof(students_scores)<< endl;

	doSomething(students_scores);

	return 0;	
}