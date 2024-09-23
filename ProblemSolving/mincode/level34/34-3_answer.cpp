#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector<string> books;
string tar;

int go(int level, int s, int e) {
	int mid = (s + e) / 2;
	if (s > e) return -1;

	if (books[mid] == tar) return level;
	if (s == e) return -1;

	int ret = 0;
	if (books[mid] > tar) ret = go(level + 1, s, mid);
	if (books[mid] < tar) ret = go(level + 1, mid + 1, e);

	return ret;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		books.push_back(str);
	}

	sort(books.begin(), books.end());

	int tc;
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		int limit;
		cin >> tar >> limit;
		int ret = go(1, 0, n - 1);

		if (ret == -1 || ret > limit) cout << "fail\n";
		else cout << "pass\n";
	}

	return 0;
}