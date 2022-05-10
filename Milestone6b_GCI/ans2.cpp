// program to find diameter, circumference and area of circle using function
//    by-Abhinav Bajaj

#include <iostream>
using namespace std;
int area(int);
int dia(int);
int circ(int);

int main()
{
    int r;
    cout << "Enter the radius of the circle" << endl;
    cin >> r;
    cout << "The diameter of the circle is " << dia(r) << endl;
    cout << "The area of the circle is " << area(r) << endl;
    cout << "The circumfrence of the circle is " << circ(r) << endl;
}
int dia(int x)
{
    return (x * 2);
}
int circ(int a)
{
    return (2 * 3.14 * a);
}
int area(int b)
{
    return (3.14 * b * b);
}
