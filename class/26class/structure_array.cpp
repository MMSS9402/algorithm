#include <iostream>
using namespace std;

int main()
{
    struct Data
    {
        int a, b;
    };

    Data arr[4]; // = {{1,2},{3,4},{5,6},{7,8}};

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i].a >> arr[i].b;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i].a << " " << arr[i].b << endl;
    }
    return 0;
}