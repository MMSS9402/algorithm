#include <iostream>
#include <queue>
#define ll long long
using namespace std;
priority_queue<ll, vector<ll>, greater<ll>> q;

ll result[1600];

int main()
{
	q.push(1);

	int cnt = 0;
	ll now = 0;
	ll old = -1;

	//1 ~ 1500 등까지 정답 미리 구해두기
	while (1)
	{
		now = q.top();
		q.pop();
        // cout << now << " " << old << endl;
		if (old == now) continue;
		old = now;

		cnt++;
		result[cnt] = now;
		if (cnt == 1500) break;

		q.push(now * 2);
		q.push(now * 3);
		q.push(now * 5);
        // if(cnt == 10) break;
	}

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int tar;
		cin >> tar;
		cout << result[tar] << " ";
	}

	return 0;
}