#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> map[3][3];
vector<int> winds;

void input()
{
	int n, k;
	cin >> n;

	int a, b;
	string jack;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> jack;
		int jn = jack.length();

		for (int x = 0; x < jn; x++) {
			map[a][b].push_back(jack[x] - '0');
		}
	}

	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> a;
		winds.push_back(a);
	}
}

int main()
{
	input();

	int wn = winds.size();
	for (int i = 0; i < wn; i++) {
		int power = winds[i];

		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 3; x++) {
				int mn = map[y][x].size();
				if (mn == 0) continue;

				map[y][x][mn - 1] -= power;
				if (map[y][x][mn - 1] <= 0) map[y][x].pop_back();
			}
		}

	}

	int result = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			result += map[y][x].size();
		}
	}

	cout << result;

	return 0;
}