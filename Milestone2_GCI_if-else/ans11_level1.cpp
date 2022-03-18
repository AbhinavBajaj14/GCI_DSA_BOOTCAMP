// program to check whether a character is lowercase or uppercase
//   by-Abhinav Bajaj
#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cout << "Enter any alphabet" << endl;
    cin >> alphabet;
    if (alphabet > 65 && alphabet < 90)
        cout << "The entered alphabet is uppercase" << endl;
    else if (alphabet > 97 && alphabet < 122)
        cout << "The alphabet is lowercase" << endl;
}