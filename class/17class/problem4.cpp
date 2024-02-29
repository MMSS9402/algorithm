#include <iostream>
using namespace std;

void abc()
{
    cout << "!";
}

int main()
{
    int arr[5] = {5};

    for (int i = 1; i < 5; i++)
    {
        arr[i] = (arr[i - 1] * 7 + 41) % 11;
    }
    return 0;
}