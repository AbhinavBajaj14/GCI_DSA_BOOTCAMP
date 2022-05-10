// program to print the circumference and area of a circle using function.
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int area(int);
int circ(int);
int main()
{
    int r;
    cout << "Enter the radius of the circle " << endl;
    cin >> r;
    cout << "The area of the circle is " << area(r) << endl;
    cout << "The circumfrence of the circle is " << circ(r) << endl;
    return 0;
}
int area(int x)
{
    return (3.14 * x * x);
}
int circ(int y)
{
    return (2 * 3.14 * y);
}