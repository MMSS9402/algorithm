#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;

// 이진 탐색으로 x 이상인 첫 번째 값을 찾음
int bs_min(int start, int end, int tgt) {
    int result = v.size(); // x 이상 값이 없으면 범위 끝으로 설정
    while (start <= end) {
        int mid = (start + end) / 2;
        if (v[mid] >= tgt) {
            result = mid;  // 현재 mid가 가능한 값
            end = mid - 1; // 더 작은 범위 탐색
        } else {
            start = mid + 1;
        }
    }
    return result;
}

// 이진 탐색으로 y 이하인 마지막 값을 찾음
int bs_max(int start, int end, int tgt) {
    int result = -1; // y 이하 값이 없으면 범위 시작으로 설정
    while (start <= end) {
        int mid = (start + end) / 2;
        if (v[mid] <= tgt) {
            result = mid;  // 현재 mid가 가능한 값
            start = mid + 1; // 더 큰 범위 탐색
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int main() {
    int N, Q;
    cin >> N >> Q;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // 정렬
    sort(v.begin(), v.end());

    // 쿼리 처리
    for (int i = 0; i < Q; i++) {
        int x, y;
        cin >> x >> y;

        // x 이상인 첫 번째 인덱스
        int start = bs_min(0, v.size() - 1, x);
        // y 이하인 마지막 인덱스
        int end = bs_max(0, v.size() - 1, y);

        // 유효 범위 출력
        if (start > end) {
            cout << 0 << '\n'; // 구간이 없는 경우
        } else {
            cout << end - start + 1 << '\n';
        }
    }

    return 0;
}