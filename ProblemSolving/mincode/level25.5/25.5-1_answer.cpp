#include <iostream>
#include <string>
using namespace std;

string str = "100+100-50+30";
int n;
int result;

int getStart(int start) {
	for (int i = start; i < n; i++) {
		if (str[i] == '+') return i;
		if (str[i] == '-') return i;
	}
	return -1;
}

int getEnd(int start) {
	for (int i = start; i < n; i++) {
		if (str[i] == '+') return i - 1;
		if (str[i] == '-') return i - 1;
	}
	return n - 1;
}

void cal(int a, int b) {
	string temp = str.substr(a + 1, b - a);
	int num = stoi(temp);

	if (str[a] == '+') {
		result += num;
	}
	if (str[a] == '-') {
		result -= num;
	}
}

int main()
{
	cin >> str;

	//맨 앞에 + 가 없으면 + 넣어주기
	if (str[0] != '-') {
		str.insert(0, "+");
	}

	n = str.length();

	int a;
	int b = -1;

	while (1) {

		a = getStart(b + 1);
		if (a == -1) break;

		b = getEnd(a + 1);
		if (b == -1) break;

		cal(a, b);
	}

	cout << result;

	return 0;
}