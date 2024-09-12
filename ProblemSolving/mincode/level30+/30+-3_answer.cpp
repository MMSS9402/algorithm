#include <iostream>
using namespace std;

int map[10][10];
char path[10];

void run(int level, int now)
{
	int flag = 0;

	for (int i = 0; i < 6; i++) {
		if (map[now][i] == 1) {
			flag = 1;
			path[level + 1] = 'A' + i;
			run(level + 1, i);
			path[level + 1] = 0;
		}
	}

	if (flag == 0) {
		cout << path << "\n";
	}
}

int main()
{
	path[0] = 'A';

	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++) {
			cin >> map[y][x];
		}
	}

	run(0, 0);

	return 0;
}