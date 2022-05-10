// program to find if person is eligible to vote
//    by-Abhinav Bajaj

#include <iostream>
using namespace std;
void check(int);
int main()
{
    int age;
    cout << "Enter the age " << endl;
    cin >> age;
    check(age);
}
void check(int age)
{
    if (age >= 18)
        cout << "The person is eligible to vote" << endl;
    else
        cout << "The person is not eligible to vote" << endl;
}
