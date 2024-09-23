#include <iostream>
#include <string>
using namespace std;

char vect[100];
int perCnt[100];
int nationCnt[100];
int isDie[100];
int n;

char uFind(char ch) {
	if (vect[ch] == 0) return ch;
	char ret = uFind(vect[ch]);
	vect[ch] = ret;
	return ret;
}

void uUnion(char t1, char t2) {
	char a = uFind(t1);
	char b = uFind(t2);
	if (isDie[t1] == 1 || isDie[t2] == 1) return;
	if (a == b) return;

	vect[b] = a;
	perCnt[a] += perCnt[b];
	nationCnt[a] += nationCnt[b];
	perCnt[b] = 0;
	nationCnt[b] = 0;
}

void war(char t1, char t2) {
	char a = uFind(t1);
	char b = uFind(t2);
	if (isDie[t1] == 1 || isDie[t2] == 1) return;
	if (a == b) return;

	if (perCnt[a] > perCnt[b]) {
		isDie[b] = 1;
		n -= nationCnt[b];
		perCnt[b] = 0;
		nationCnt[b] = 0;
	}
	else {
		isDie[a] = 1;
		n -= nationCnt[a];
		perCnt[a] = 0;
		nationCnt[a] = 0;
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		char ch = 'A' + i;
		nationCnt[ch] = 1;
		cin >> perCnt[ch];
	}

	int t;
	cin >> t;

	string cmd;
	char a, b;
	for (int i = 0; i < t; i++) {
		cin >> cmd >> a >> b;
		if (cmd == "alliance") {
			uUnion(a, b);
		}
		if (cmd == "war") {
			war(a, b);
		}
	}
	
	cout << n;

	return 0;
}