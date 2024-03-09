#include <iostream>
using namespace std;

void doSomething(int students_scores[20])
{
    cout << (int)&students_scores << endl;
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
}

int main()
{
    const int num_students = 20;

    int students_scores[num_students] = {1, 2, 3, 4, 5};

    cout << (int)&students_scores << endl;
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;

    doSomething(students_scores);

    return 0;
}