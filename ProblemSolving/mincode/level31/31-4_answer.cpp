#include <iostream>
#include <string>
using namespace std;

string map[5];

int main()
{
	for (int y = 0; y < 5; y++) {
		cin >> map[y];
	}

	for (int y = 0; y < 5; y++) {
		swap(map[y][1], map[y][3]);
	}

	for (int y = 0; y < 5; y++) {		
		if (map[y] == "MAPOM") {
			cout << "yes";
			return 0;
		}
	}

	cout << "no";

	return 0;
}