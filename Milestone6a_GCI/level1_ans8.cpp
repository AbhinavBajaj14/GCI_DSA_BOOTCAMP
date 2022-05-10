// a program of making a function that will display grades acc. to the marks
//    by-Abhinav Bajaj

#include <iostream>
using namespace std;
void grade(int);
int main()
{
    int marks;
    cout << "Enter the marks obtained by the student" << endl;
    cin >> marks;
    grade(marks);
}
void grade(int x)
{
    if (x > 90 && x <= 100)
        cout << "The grade is AA" << endl;

    if (x > 80 && x <= 90)
        cout << "The grade is AB" << endl;

    if (x > 70 && x <= 80)
        cout << "The grade is BB" << endl;

    if (x > 60 && x <= 70)
        cout << "The grade is BC" << endl;

    if (x > 50 && x <= 60)
        cout << "The grade is CD" << endl;

    if (x > 40 && x <= 50)
        cout << "The grade is DD" << endl;

    if (x <= 40)
        cout << "The student has failed" << endl;
}