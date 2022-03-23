// program to find all prime factors of a number.//  by-Abhinav Bajaj
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num, i, j, k = 0;
    cout << "Enter the number for which you want to find the prime factors" << endl;
    cin >> num;
    cout << "The prime factors are ";
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                    k += 1;
            }
            if (k == 0)
                cout << i << "\t";
        }
    }
}