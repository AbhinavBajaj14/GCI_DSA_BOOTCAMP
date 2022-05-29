// program to determine middle row and middle column of a 2-d array entered by user
//  By - Abhinav Bajaj

#include <iostream>
using namespace std;

void middle(int array[100][100], int x, int y)
{
    int i = 0, j = 0;
    cout << "Middle row : ";
    while (i = x / 2 && j < y)
    {
        cout << array[i][j] << " ";
        j++;
    }
    cout << endl;

    cout << "Middle column : ";
    while (j = x / 2 && i < x)
    {
        cout << array[i][j] << " ";
        i++;
    }
}
int main()
{
    int r, c, i, j;

    cout << "Enter the number of rows of the matrix(should be odd) " << endl;
    cin >> r;
    cout << "Enter the number of columns of the matrix (should be same as row) " << endl;
    cin >> c;
    int matrix[100][100];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter element [ " << i << " ] "
                 << " [ " << j << " ] " << endl;

            cin >> matrix[i][j];
        }
    }
    middle(matrix, r, c);
}