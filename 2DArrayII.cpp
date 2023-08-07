#include <iostream>
using namespace std;

// While passsing an array to a function you must need to specify the number of cols.
// Number of cols must be defined.
void displayArray(const int[][5], int, int);
void getInput(int[][5], int, int);

// Passing a 3D array into a function we have to specify all the dimensions other than first one
//  i.e.
void displayArray(int[][50][5], int, int, int);
int main()
{
    // Formula: marks [i][j] -> base adress + (i*COLS + j)* Size of datatype.
    const int ROWS = 3;
    const int COLS = 5;
    // int marks[ROWS][COLS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    //  Initialinzation can be done using sepraate initilization lists.
    // C++ use row major order to store the elements of the array.
    int marks[ROWS][COLS] = {{1, 2, 3, 4, 5},
                             {6, 7, 8, 9, 10},
                             {11, 12, 13, 14, 15}};

    int m[2][5];
    getInput(m, 2, 5);
    displayArray(m, 2, 5);
    // It will Display base Adress of the Array.
    cout << "Base Address: " << marks << endl;

    displayArray(marks, ROWS, COLS);

    // for (int i = 0; i < ROWS; i++)
    // {
    //     cout << "Marks of Student # " << i + 1 << " are : ";
    //     for (int j = 0; j < COLS; j++)
    //     {
    //         cout << marks[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // 3D Array

    // int quizMarks1[50][5];
    // int quizMarks2[50][5];
    // int quizMarks3[50][5];

    int quizMarks[3][50][5];
    // int quizMarks [Dimension][rows][cols];
    // We need a triple nested loop to process (output/input) such array

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 50; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                cin >> quizMarks[i][j][k];
            }
        }
    }

    return 0;
}

// You must need to specify the number of cols.
void displayArray(const int a[][5], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "Marks of Student # " << i + 1 << " are : ";
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void getInput(int a[][5], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "Entery at " << i + 1 << ": ";
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }
}