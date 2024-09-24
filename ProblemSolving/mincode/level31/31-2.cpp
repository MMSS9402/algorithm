#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int arr[100000];
int n;
int isFour(int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int limit = n - size;
    for (int i = 0; i <= limit; i++)
    {
    }
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }

    return 0;
}