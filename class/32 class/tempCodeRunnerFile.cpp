#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

int main(){

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.top();

    return 0;
}