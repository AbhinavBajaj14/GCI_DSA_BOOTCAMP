//
//  by-Abhinav Bajaj
#include <iostream>
using namespace std;
int main()
{
    int age;
    char gender, marriage;
    cout << "Enter the age" << endl;
    cin >> age;
    cout << "The gender of the employee is (M/F)" << endl;
    cin >> gender;
    cout << "Is the employee married (Y/N)" << endl;
    cin >> marriage;

    if (gender == 'F')
        cout << "She will work only in urban areas" << endl;
    else if (gender == 'M' && (age >= 20 || age <= 40))
        cout << "He may work anywhere" << endl;
    else if (gender == 'M' && (age >= 40 || age <= 60))
        cout << "He may work in urban areas only" << endl;
    else
        cout << "ERROR" << endl;
}