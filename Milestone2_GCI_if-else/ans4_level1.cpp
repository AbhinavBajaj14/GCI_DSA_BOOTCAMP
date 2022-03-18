// program to determine bonus
// by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int years, sal;
    float bonus;
    cout << "Enter the number of years of your service in the company" << endl;
    cin >> years;
    if (years < 5)
        cout << "Sorry!! You are not eligible for bonus" << endl;
    else
    {
        cout << "Enter your salary" << endl;
        cin >> sal;
        bonus = (0.05 * sal);
        cout << "Congratulations!! You get a bonus of Rs " << bonus << endl;
    }
}