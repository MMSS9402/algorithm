#include<iostream>
using namespace std;

int main()
{
	char vect[10] = "MINCODING";
	int n;
	int bucket[200] = { 0 };
	char target[10];
	int x;

	for (x = 0; x < 9; x++)
	{
		bucket[vect[x]] = 1;
	}

	cin >> n;
	for (x = 0; x < n; x++)
	{
		cin >> target[x];
	}

	for (x = 0; x < n; x++)
	{
		if (bucket[target[x]] == 1) cout << "O";
		else cout << "X";
	}

}