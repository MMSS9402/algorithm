#include <iostream>
#include <vector>
#include <string>
using namespace std;

char vect[100] = {0, 'A', 'B', 'T', 'R', 'S', 'V'};

void run(int now)
{
    if (vect[now] == 0)
        return;
    cout << now;
    run(now * 2);
    run(now * 2 + 1);
}

int main()
{

    run(1);

    return 0;
}