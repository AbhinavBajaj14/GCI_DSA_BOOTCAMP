// program to swap first and last digit of a number
//    by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 1, n, num, num1, j = 0, first, last, new_num;
    cout << "Enter any number" << endl;
    cin >> num;
    num1 = num;
    // finding out the number of digits in the input number and saving it as j
    while (1)
    {
        num = num / 10;
        j++;

        if (num == 0)
        {
            break;
        }
    }
    cout << num1 << " is a " << j << " digit number" << endl;

    first = (num1 / int(pow(10, (j - 1)))); // extracting the first digit
    last = (num1 % 10);                     // extracting the last digit

    num1 = (num1 % int(pow(10, (j - 1)))); // removing the first digit
    num1 = (num1 / 10);                    // removing the last digit

    num1 = (num1 * 10); // adding 0 at the end to make place for number to be added

    last = (last * int(pow(10, (j - 1)))); // multiplying last(to-be-first)to have suitable number of zeroes
    num1 = (num1 + last + first);
    cout << "The new number with swapped first and last digit is " << num1 << endl;
    return 0;
}
