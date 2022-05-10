// program to calculate tax on income w.r.t certain rules
//    by-Abhinav Bajaj

#include <iostream>
using namespace std;
int taxCalculator(int, int);
int main()
{
    int gross_sal, tot_sav;
    cout << "Enter the gross salary" << endl;
    cin >> gross_sal;
    cout << "Enter the total savings" << endl;
    cin >> tot_sav;
    taxCalculator(gross_sal, tot_sav);
}
int taxCalculator(int gross_sal, int tot_sav)
{
    int taxable, tax;
    if (tot_sav < 100000)
        taxable = gross_sal - tot_sav;

    else
        taxable = gross_sal - 100000;

    if (taxable < 100000)
        tax = 0;

    else if (taxable > 100000 && taxable < 200000)
        tax = 0.1 * (taxable - 100000);

    else if (taxable > 200000 && taxable < 500000)
        tax = (0.1 * (taxable - 100000)) + 0.2 * (taxable - 200000);

    else if (taxable > 500000)
        tax = (0.1 * (taxable - 100000)) + 0.2 * (taxable - 200000) + 0.3 * (taxable - 500000);

    cout << "The tax is " << tax << endl;
}