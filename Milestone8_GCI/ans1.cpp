// menu driven program to perform various functions on matrix
// By - Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int r, c, m, n, choice, sum = 0, rsum, csum;

    cout << "Enter the number of rows of the matrix " << endl;
    cin >> m;
    cout << "Enter the number of columns of the matrix " << endl;
    cin >> n;
    int matrix[m][n];

    cout << "MENU : " << endl;
    cout << "1. To display elements of matrix of size m x n" << endl;
    cout << "2. Sum of all elements of matrix of size m x n" << endl;
    cout << "3. To display row-wise sum of matrix of size m x n" << endl;
    cout << "4. To display column-wise sum of matrix of size m x n" << endl;
    cout << "5. To create transpose of matrix B of size m x n" << endl;
    cout << "Choose among the options above: ";
    cin >> choice;

    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
        {
            cout << "Enter element [ " << r << " ] "
                 << " [ " << c << " ] " << endl;

            cin >> matrix[r][c];
        }
    }
    switch (choice)
    {
    case 1:
        cout << "The matrix is : " << endl;
        for (r = 0; r < m; r++)
        {
            for (c = 0; c < n; c++)
            {

                cout << matrix[r][c] << " ";
            }
            cout << "\n";
        }
        break;

    case 2:
        for (r = 0; r < m; r++)
        {
            for (c = 0; c < n; c++)
            {
                sum += matrix[r][c];
            }
        }
        cout << "The sum of the elements of the matrix is " << sum << endl;
        break;

    case 3:
        for (r = 0; r < m; r++)
        {
            rsum = 0;
            for (c = 0; c < n; c++)
            {
                cout << matrix[r][c] << "\t";
                rsum += matrix[r][c];
            }
            cout << " | " << rsum;
            cout << endl;
        }
        break;

    case 4:
        for (r = 0; r < m; r++)
        {
            csum = 0;
            for (c = 0; c < n; c++)
            {
                cout << matrix[r][c] << "\t";
                csum += matrix[c][r];
            }
            cout << " | " << csum;
            cout << endl;
        }

        break;
    case 5:
        int matrix2[m][n];
        for (r = 0; r < m; r++)
        {
            for (c = 0; c < n; c++)
            {
                matrix2[r][c] = matrix[c][r];
            }
        }
        cout << "The transpose of the matrix is : " << endl;
        for (r = 0; r < m; r++)
        {
            for (c = 0; c < n; c++)
            {
                cout << matrix2[r][c] << " ";
            }
            cout << endl;
        }

        break;
    }
}
