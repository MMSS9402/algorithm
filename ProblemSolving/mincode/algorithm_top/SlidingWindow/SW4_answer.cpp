#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int test;
	cin >> test;
	for (int t = 1; t <= test; t++) {

		int arr[200002] = {0, }; // 배열 붙여넣기 위해 길이 x2
		int DAT[201] = { 0, }; // DAT 위한 배열 (0~200까지의 음식 숫자 입력)

		int n, r; 
		cin >> n >> r; 
		
		for (int i = 0; i < n; i++) {
			int food;
			cin >> food;
			arr[i] = food;
			arr[i + n] = food; // 한바퀴 돌려서 돌아올 위치에도 같은 음식을 둠
		}

		int start = 0;
		int end = 2 * r; // 구간은 앞,뒤 둘 다 해야 하니 구간 x2
		int flag = 0;
		
		// 공통 구간 설정
		for (int k = start; k < end; k++) {
			DAT[arr[k]]++; 
			// 첫 입력에서 두개 이상이 있는지 체크
			if (DAT[arr[k]] > 2)
				flag = 1; 
		}

		//sliding window 
		while (end < n*2 && flag == 0) {
			DAT[arr[end]]++;
			if (DAT[arr[end]] > 2) {
				flag = 1;
				break;
			}
			DAT[arr[start]]--;
			start++;
			end++;
		}
		if (flag == 1)
			cout << "#" << t << " NO\n";
		else
			cout << "#" << t << " YES\n";
		
	}

}