// program to calculate discount
// by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int unit, total_cost, final_cost;
    cout << "Enter the number of units to be purchased" << endl;
    cin >> unit;
    total_cost = (unit * 100);
    if (total_cost < 1000)
        cout << "you get no discout and the final cost is " << total_cost << endl;
    else
        cout << " You got a discount of 10% and the final cost is " << (total_cost - (0.1 * total_cost)) << endl;
}