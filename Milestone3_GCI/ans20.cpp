// program to print ASCII character with their values
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i;
    int j = 1;
    for (i = 1; i <= 255; i++)
    {
        cout << j << " = " << (char)i << endl;
        j = j + 1;
    }
}