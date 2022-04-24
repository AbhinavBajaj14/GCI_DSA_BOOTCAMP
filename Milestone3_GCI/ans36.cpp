// program to print Fibonacci series up to n terms.
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int n1, n3, n2, n, i;
    cout << "Enter the 1st term of the series " << endl;
    cin >> n1;
    cout << "Enter the 2nd term of the series " << endl;
    cin >> n2;
    cout << "Enter the number of terms (n) you want in the series" << endl;
    cin >> n;
    cout << "The fibonacci series upto n terms : " << endl;
    cout << n1 << "\t" << n2;
    for (i = 1; i < n; i++)
    {
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
        cout << "\t" << n3;
        +
    }
    cout << "\n";
}
