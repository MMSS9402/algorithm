#include <iostream>
#include <string>
using namespace std;

string vect[110] = {
	"SHOW<M><K><MK>",
	"WHATISYOU<GOOD>",
	"WHO<ARE>YOU",
	"<V><I>CCCCC<I><V>",
	"<ABS>CENTER123<123>",
};

int n = 5;

void input()
{
	cin >> n;
	for (int y = 0; y < n; y++) {
		cin >> vect[y];
	}
}

int isOnlyOne(string word) {
	int wn = word.length();
	int dat[200] = { 0 };

	for (int i = 0; i < wn; i++) {
		dat[word[i]]++;
		if (dat[word[i]] == 2) return 0;
	}
	return 1;
}

int check(string str) 
{
	int a;
	int b = -1;

	while (1) {
		a = str.find('<', b + 1);
		if (a == -1) break;

		b = str.find('>', a + 1);
		if (b == -1) break;

		string temp = str.substr(a + 1, b - a - 1);
		if (isOnlyOne(temp) == 0) return 0;
	}

	return 1;
}

int main()
{
	input();

	for (int i = 0; i < n; i++) {
		int ret = check(vect[i]);
		if (ret == 1) cout << "O";
		else cout << "X";
	}

	return 0;
}