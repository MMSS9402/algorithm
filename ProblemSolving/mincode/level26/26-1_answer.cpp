#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    int *simData[5] = {&a, &b, &c, &d, &e};

    cin >> a >> b >> c >> d >> e;

    int MAX = *simData[0];
    int MIN = *simData[0];

    for (int i = 0; i < 5; i++)
    {
        if (MAX < *simData[i])
            MAX = *simData[i];
        if (MIN > *simData[i])
            MIN = *simData[i];
    }
    cout << "MAX:" << MAX << endl;
    cout << "MIN:" << MIN;

    return 0;
}