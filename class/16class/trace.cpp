#include <iostream>
using namespace std;

void abc()
{
    cout << "HI";
}

int main()
{
    // Visual Studio Trace 시작할 때, F10 누름 시작, Shift + F5 끔
    // 다른 IDE들은 Breakpoint(빨간점)걸고 F5 눌러서 Trace 시작

    int a = 10;
    int b = 20;
    int c = 30;
    abc();
    int d = 40;
    int e = 50;

    a = 20;
    b = 30;
    c = 40;
    abc();
    d = 50;
    a = 35;
    a = 67;
    abc();
    b = 24;
    a = 50;
    c = 356;
    abc();
}