#include <iostream>
#include <algorithm>
using namespace std;

// C++
//  1. cin
//  2. cout
//  ios::sync_with_stdio(false);
//  cin.tie(0);
//  cout.tie(0);

int arr[1100]; // 바운더리 에러가 안나게 10퍼정도 여유가 있게 잡자

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen_s(new FILE *, "input.txt", "r", stdin);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 1. sort

    sort(arr, arr + n);

    int t = n - 1;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += (arr[i] * t);
        t--;
    }
    cout << sum;
    return 0;
}