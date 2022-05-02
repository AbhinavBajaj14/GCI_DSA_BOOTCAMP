// star pattern program
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i, j;

    for (i = 1; i <= 7; i++)
    {

        for (j = 1; j <= 7; j++)
        {
            if (j == i)
            {
                cout << "\\";
            }
            else if (i + j == 8)
                cout << "/";
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
