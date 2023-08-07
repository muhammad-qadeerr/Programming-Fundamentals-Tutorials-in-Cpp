#include <iostream>
using namespace std;
int main()
{

    // Defining an Array
    int marks[5]; // Size of the array must be constant and expression with constant keyword
    const int n = 10;
    int m[n]; // Allowed
    //[n]={5,6,7,8,9,10,11,12, 0, };
    int arr[] = {1, 2, 3, 4, 5}; // bt default size 5

    int sum = 0;
    double avg;

    cout << marks << endl; // Printing the name of array will print thre adress of its first element
    // Inputing can be done by using while and for loop

    int i = 0;
    while (i < 5)
    {
        cout << "Enter the marks of student " << i + 1 << " : ";
        cin >> marks[i];
        i++;
    }
    cout << "You Entered: ";
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl;

        sum += marks[i];
    }

    cout << "The sum of the marks is: " << sum << endl;
    avg = static_cast<double>(sum) / 5;
    cout << "The average of the marks is: " << avg << endl;

    int arr[] = {10, 12}; // array

    return 0;
}