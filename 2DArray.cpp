#include <iostream>
using namespace std;

int main()
{
    // Defining a 2D array
    const int ROWS = 3;
    const int COLS = 5;
    // Total Memory Allocated = 3 x 5 x 4bytes = 60 bytes
    int marks[ROWS][COLS];
    // marks[1][2] = 75;
    // marks[0][0] = 80;

    // cout << marks[1][2] << endl;
    // cout << marks[0][0];

    // ROW-Wise Processing

    // Taking input by loop Structures

    // for (int i = 0; i < ROWS; i++)
    // {
    //     cout << "Enter the marks of Student # " << i + 1 << ": ";
    //     for (int j = 0; j < COLS; j++)
    //     {
    //         cin >> marks[i][j];
    //     }
    // }

    // Getting Output by loop Structures

    // int sum = 0;
    // for (int i = 0; i < ROWS; i++)
    // {
    //     cout << "Marks of Student # " << i + 1 << " are : ";
    //     for (int j = 0; j < COLS; j++)
    //     {
    //         cout << marks[i][j] << " ";
    //         sum = sum + marks[i][j];
    //     }
    //     cout << endl;
    // }

    // double avg = static_cast<double>(sum) / 15; // Rows x cols  = 15

    //    cout << "The average is: " << avg << endl;

    // Coloumn Wise processing
    // Taking Input column wise
    for (int i = 0; i < ROWS; i++)
    {
        cout << "Enter the marks of Student # " << i + 1 << ": ";
        for (int j = 0; j < COLS; j++)
        {
            cin >> marks[i][j];
        }
    }
    // Output in coloumn wise
    for (int j = 0; j < COLS; j++)
    {
        cout << "Marks of Subject # " << j + 1 << " are : ";
        for (int i = 0; i < ROWS; i++)
        {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// 2D arrays help us to deal with value store in multiple 1D arrays.
// For Example if you are asked to store the numbers of 5 subjects of each of 60 students in the class
// instead to mking arrays like that
// int marks1 [5];
// int marks2 [5];
// .....
// int marks60 [5]; you should make a 2D array
// int marks [60][5]; = marks  [rows][colums]