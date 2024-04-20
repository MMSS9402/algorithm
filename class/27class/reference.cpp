#include <iostream>
#include <string>
#include <vector>
using namespace std;

void gogo(int *p)
{
    //*p는 x랑 똑같음
    // 값을 복사해서 가져오는게 아니라 값 자체를 가져와버림
    *p = 500;
}

void bts(int &hp)
{
    hp = 2600;
}

int main()
{

    int x;

    gogo(&x);

    // 레퍼런스

    int energy = 500;
    // energy라는 변수명이 있고, hp도 이름임 약간 별명??
    // 둘이 똑같아짐
    // int &hp = energy;

    // cout << hp;
    // hp = 200;

    bts(energy);

    return 0;
}