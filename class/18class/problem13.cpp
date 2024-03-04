#include <iostream>
using namespace std;

int arr1[2][4] = {
    5, 7, 9, 55,
    30, 10, 6, 8};

int arr2[2][4] = {
    1, 2, 3, 4,
    5, 7, 10, 15};

int main()
{

    int dat[100] = {0};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            dat[arr1[i][j]]++;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (dat[arr2[i][j]] == 0)
            {
                cout << "person"
                     << " ";
            }
            if (dat[arr2[i][j]] != 0)
            {
                cout << "crime"
                     << " ";
            }
        }
        cout << endl;
    }

    return 0;
}