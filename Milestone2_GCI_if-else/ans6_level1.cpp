// program to find greatest age among 3 persons
// by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int age1, age2, age3;
    cout << "Enter the age of 1st person" << endl;
    cin >> age1;
    cout << "Enter the age of 2nd person" << endl;
    cin >> age2;
    cout << "Enter the age of 3rd person" << endl;
    cin >> age3;
    if (age1 > age2)
    {
        if (age1 > age3)
        {
            if (age2 > age3)
                cout << "Person 3 is the youngest" << endl;
            else
                cout << "Person 2 is the youngest" << endl;
            cout << "Person 1 is the oldest" << endl;
        }
        else if (age3 > age1)
        {

            cout << "Person 3 is the oldest" << endl;
            cout << "Person 2 is the youngest" << endl;
        }
    }
    else if (age2 > age1)
    {
        if (age2 > age3)
        {
            if (age3 > age1)
                cout << "Person 1 is the youngest" << endl;
            else
                cout << "Person 3 is the youngest" << endl;

            cout << "Person 2 is the oldest" << endl;
        }
        else
        {
            cout << "Person 1 is the youngest" << endl;
            cout << "Person 3 is the oldest" << endl;
        }
    }
}