#include <iostream>
using namespace std;

// struct Node{
//     int x;
//     int y;

//     void bbq(){
//         cout << "#";
//     }
// };
class Node
{
public:
    // 멤버변수
    int x;
    int y;

    void bbq()
    { //  이 함수는 함수라고 부르지 않고 메서드라고 부름
        cout << "#";
    }
};

int main()
{
    Node a;
    a.x = 10;
    a.y = 20;
    a.bbq();

    return 0;
}