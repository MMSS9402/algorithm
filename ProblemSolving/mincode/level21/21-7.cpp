#include <iostream>
#include <cstring>
using namespace std;

void run(int level)
{
    cout << level << " ";
    if (level == 1)
        return;

    run(level - 1);
    cout << level << " ";
}

int main()
{
    char vect[100];
    cin >> vect;
    int len = strlen(vect);

    run(len);
    return 0;
}