// program to understand operators
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int x = 2, y = 5, z = 0;
    cout << "a." << (x == 2) << endl;
    cout << "b." << (x != 5) << endl;
    cout << "c." << (x != 5 && y >= 5) << endl;
    cout << "d." << (z != 0 || x == 2) << endl;
    cout << "e." << (!(y < 10)) << endl;
}