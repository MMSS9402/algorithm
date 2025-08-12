#include <iostream>

using namespace std;


int main(){
	const int num_students = 5;
	int scores[num_students] = {84,92,76,81,56};

	int max_score = -1;

	for(int i=0;i<num_students; i++){
		total_score += scores[i];
		if(max_score<scores[i]){
			max_score = scores[i];
		}
	}
	cout << max_score;	

	return 0;	
}