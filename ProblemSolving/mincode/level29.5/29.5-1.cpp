#include <iostream>
#include <vector>
#include <string>
using namespace std;

int map[9] = {3, 1, 2, 1, 3, 2, 1, 2, 1};

void run(int now, int idx)
{
    if (idx >= 9)
    {
        cout << "도착" << " ";
        return;
    }
    cout << now << " ";
    run(map[now + idx], idx + now);
    cout << now << " ";
}

int main()
{

    int n;
    cin >> n;
    n = n - 1;
    cout << "시작" << " ";
    run(map[n], n);
    cout << "시작" << " ";

    return 0;
}