#include <iostream>
#include <cstring>
using namespace std;


struct Data
{
	char burger1[8],burger2[8];
};

int main(){
    Data bob,tom;

    cin >> bob.burger1 >> bob.burger2;
    cin >> tom.burger1 >> tom.burger2;

    cout << "bob.burger1"<<strlen(bob.burger1) << endl;
    cout << "bob.burger2"<<strlen(bob.burger2) << endl;
    cout << "tom.burger1"<<strlen(tom.burger1) << endl;
    cout << "tom.burger2"<<strlen(tom.burger1) << endl;

}