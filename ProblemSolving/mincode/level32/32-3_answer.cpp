#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> tong;
	int n;
	cin >> n;

	int po;
	for (int i = 0; i < n; i++) {
		cin >> po;
		tong.push_back(po);

		int tn = tong.size();
		if (tn > 2) {
			int a = tong[tn - 1];
			int b = tong[tn - 2];
			int c = tong[tn - 3];

			if (a == b && b == c) {
				tong.pop_back();
				tong.pop_back();
				tong.pop_back();
			}
		}
	}

	sort(tong.begin(), tong.end());

	n = tong.size();
	for (int i = 0; i < n; i++) {
		cout << tong[i] << " ";
	}

	return 0;
}