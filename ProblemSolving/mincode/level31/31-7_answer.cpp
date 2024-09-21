#include <iostream>
using namespace std;

string vect[20];
int n;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> vect[i];
	}

	for (int y = 0; y < n; y++) {
		for (int x = y + 1; x < n; x++) {
			if (vect[y].length() > vect[x].length()) swap(vect[y], vect[x]);
			else if (vect[y].length() == vect[x].length() && vect[y] > vect[x]) swap(vect[y], vect[x]);
		}
	}

	for (int i = 0; i < n; i++) {
		cout << vect[i] << "\n";
	}

	return 0;
}