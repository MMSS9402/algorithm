#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string changeID(string id)
{
	int idn = id.length();
	int littleCnt = 0;
	int bigCnt = 0;

	//소문자, 대문자 개수 확인
	for (int i = 0; i < idn; i++) {
		if (id[i] >= 'a' && id[i] <= 'z') littleCnt++;
		if (id[i] >= 'A' && id[i] <= 'Z') bigCnt++;
	}

	//모두 소문자
	if (idn == littleCnt) {
		id[0] = id[0] - 'a' + 'A';
		return id;
	}

	//정상 조건
	if (id[0] >= 'A' && id[0] <= 'Z' && bigCnt == 1) {
		return id;
	}

	//모두 대문자로 변경
	for (int i = 0; i < idn; i++) {
		if (id[i] >= 'a' && id[i] <= 'z') {
			id[i] = id[i] - 'a' + 'A';
		}
	}
	return id;
}

int main()
{
	int n;
	string input;
	vector<string> ids;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		input = changeID(input);
		ids.push_back(input);
	}
	
	sort(ids.begin(), ids.end());

	for (int i = 0; i < n; i++) {
		cout << ids[i] << "\n";
	}

	return 0;
}