#include <iostream>
#include <string>
using namespace std;

string str;
string vect[100];
int t;

void split()
{
	int a = 0;
	int b;
	string temp;

	while (1) {
		b = str.find('|', a);
		if (b == -1) {
			b = str.length();
			temp = str.substr(a, b - a);
			vect[t++] = temp;
			break;
		}

		temp = str.substr(a, b - a);
		vect[t++] = temp;
		a = b + 1;
	}
}

int main()
{
	cin >> str;
	split();
	
	string name, domain;
	int a, b;
	for (int i = 0; i < t; i++) {
		string tar = vect[i];

		a = tar.find('@');
		name = tar.substr(0, a);

		b = tar.find('.', a + 1);
		domain = tar.substr(a + 1, b - a - 1);

		cout << "[#" << name << "] " << domain << endl;
	}

	return 0;
}