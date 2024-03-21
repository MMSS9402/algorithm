#include <iostream>
using namespace std;

char vect[4][5][4] = {
    {" # ", "# #", "###", "# #", "# #"}, // A
    {"###", "# #", "###", "# #", "###"}, // B
    {"###", "# #", "#  ", "# #", "###"}, // C
    {"## ", "# #", "# #", "# #", "## "}, // D
};

int main()
{

    int a;
    cin >> a;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << vect[a][i][j];
        }
        cout << endl;
    }

    return 0;
}