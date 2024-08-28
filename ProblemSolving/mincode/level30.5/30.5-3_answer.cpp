#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {
        1, 5, 4, 2, -5, -7};
    int n;
    cin >> n;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6 - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    cout << arr[n - 1];
    return 0;
}