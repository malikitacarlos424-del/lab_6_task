#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows (1-3): ";
    cin >> rows;

    cout << "Enter number of columns (1-3): ";
    cin >> cols;

    while (rows < 1 || rows > 3 || cols < 1 || cols > 3)
    {
        cout << "Invalid dimensions! Enter values between 1 and 3." << endl;

        cout << "Enter number of rows (1-3): ";
        cin >> rows;

        cout << "Enter number of columns (1-3): ";
        cin >> cols;
    }

    double **array = new double *[rows];

    for (int i = 0; i < rows; i++)
    {
        array[i] = new double[cols];
    }

    cout << "Enter the array elements:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "The array elements are:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }

    delete[] array;

    return 0;
}
