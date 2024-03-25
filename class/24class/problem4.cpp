#include <iostream>
#include <string>
using namespace std;

// int main()
// {
//     string str;
//     str = "BBQ";

//     // 비교 strcmp??
//     if (str == "BBQ")
//     {
//         cout << "#";
//     }

//     return 0;
// }

int main()
{
    string ID;
    string pass;

    cin >> ID;
    cin >> pass;

    if (ID != "BTS")
    {
        cout << "ID 틀림" << endl;
    }
    else if (ID == "BTS" && pass != "1137")
    {
        cout << "비번 틀림" << endl;
    }
    else if (ID == "BTS" && pass == "1137")
    {
        cout << "Login" << endl;
    }
    return 0;
}