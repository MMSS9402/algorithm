#include <iostream>
using namespace std;

void abc()
{
    cout << "!";
}

int main()
{
    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        j++;
    }
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        k++;
        k++;
        k++; // k가 6일때 k 값 확인하기.
    }

    return 0;
}