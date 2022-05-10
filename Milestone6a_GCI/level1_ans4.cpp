// program to print the maximum and minimum among three numbers using function
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int max(int, int, int);
int min(int, int, int);
int main()
{
    int n1, n2, n3;
    cout << "Enter any three numbers" << endl;
    cin >> n1 >> n2 >> n3;
    cout << "The maximum number among the entered numbers is " << max(n1, n2, n3) << endl;
    cout << "The minimum number among the entered numbers is " << min(n1, n2, n3) << endl;
    return 0;
}
int max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    if (b > a && b > c)
        return b;
    if (c > a && c > b)
        return c;
}
int min(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    if (b < a && b < c)
        return b;
    if (c < a && c < b)
        return c;
}