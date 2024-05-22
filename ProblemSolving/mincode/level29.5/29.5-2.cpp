#include <iostream>
#include <vector>
#include <string>
using namespace std;

int evid[7] = {-1, 0, 0, 1, 2, 4, 4};
int timeStamp[7] = {8, 3, 5, 6, 8, 9, 10};

void run(int now)
{
    if (evid[now] == -1)
    {
        cout << now << "번index(출발)" << endl;
        return;
    }

    int next = evid[now];

    run(next);
    cout << now << "번index(" << timeStamp[now] << "시)" << endl;
}

int main()
{

    int n;
    cin >> n;
    run(n);
    return 0;
}