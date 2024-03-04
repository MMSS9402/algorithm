#include <iostream>
using namespace std;

bool CheckSorted(int *arr, int size)
{

    // TODO : 오름차순 정렬확인 함수 구현

    return false;
}

int main()
{

    for (int k = 0; k < 3; k++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < 3; i++)
            {
                int arr[3] = {i, j, k};
                int size = sizeof(arr) / sizeof(arr[0]);

                for (int e = 0; e < size; e++)
                {
                    cout << arr[e] << " " << flush;
                }
                cout << "-->" << flush;
                // TODO
                if (arr[0] > arr[1])
                {
                    int temp = arr[0];
                    arr[0] = arr[1];
                    arr[1] = temp;
                }
                if (arr[1] > arr[2])
                {
                    int temp = arr[1];
                    arr[1] = arr[2];
                    arr[2] = temp;
                }

                for (int e = 0; e < size; e++)
                {
                    cout << arr[e] << " " << flush;
                }

                cout << boolalpha;
                cout << CheckSorted(arr, size);
                cout << endl;
            }
        }
    }

    return 0;
}