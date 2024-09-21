#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

vector<char> reg[5];

int main()
{
	string input;
	for (int i = 0; i < 5; i++) {
		cin >> input;

		int n = input.length();
		for (int x = 0; x < n; x++) {
			reg[i].push_back(input[x]);
		}
	}

	int a, b;
	cin >> a >> b;
	sort(reg[a].begin(), reg[a].end());
	sort(reg[b].begin(), reg[b].end());

	for (int i = 0; i < 5; i++) {
		cout << reg[i][0] << " ";
	}

	return 0;
}