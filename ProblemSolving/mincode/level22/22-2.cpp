#include <iostream>
#include <cstring>
using namespace std;

char arr1[10];
char arr2[10];
char arr3[10];

// int isSame(){
//     if(!strcmp(arr1,arr2)&&!strcmp(arr2,arr3)&&!strcmp(arr1,arr3)){

//     }
// }

int main()
{
    cin >> arr1;
    cin >> arr2;
    cin >> arr3;
    int a = strcmp(arr1, arr2);
    int b = strcmp(arr2, arr3);
    int c = strcmp(arr1, arr3);

    if (strcmp(arr1, arr2) == 0 && strcmp(arr2, arr3) == 0 && strcmp(arr1, arr3) == 0)
    {
        cout << "WOW";
    }
    else if (strcmp(arr1, arr2) != 0 && strcmp(arr2, arr3) != 0 && strcmp(arr1, arr3) != 0)
    {
        cout << "BAD";
    }
    else
    {
        cout << "GOOD";
    }

    return 0;
}