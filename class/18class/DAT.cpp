#include <iostream>
using namespace std;

int main()
{
    int vect[5] = {4, 4, 2, 4, 4};

    int dat[5] = {0}; // 0으로 초기화를 꼭 해줘야 함!

    for (int i = 0; i < 5; i++)
    {
        // int idx = vect[i];
        // dat[idx]++;
        dat[vect[i]]++;
    }

    for (int i = 0; i < 5; i++)
    {
        if (dat[i] > 0)
        {
            cout << i << ":" << dat[i] << endl;
        }
    }

    return 0;
}