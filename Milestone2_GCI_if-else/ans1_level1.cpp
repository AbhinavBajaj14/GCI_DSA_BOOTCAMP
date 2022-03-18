// program to check if a given rectangle is a square
// by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int l, b;
    cout << "Enter the length and breadth of the rectangle" << endl;
    cin >> l >> b;
    if (l == b)
        cout << "The rectangle is a square" << endl;
    else
        cout << "The rectangle is not a square" << endl;
}