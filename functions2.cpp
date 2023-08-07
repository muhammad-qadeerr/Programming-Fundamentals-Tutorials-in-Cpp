#include <iostream>
using namespace std;

// -> Passing by value
// Function prototype
// void modify(int val); // -> val is parameter

void swapValue(int, int);
int calculateSum(int, int);
int findLargest(int, int);
int getMarks();
int main()
{

    int n1 = 5, n2 = 10;
    cout << "Start of the main " << n1 << " " << n2 << endl;

    int m = getMarks();
    cout << "You Entered: " << m << endl;

    cout << "Back in main " << n1 << " " << n2 << endl;
    // swapValue(n1, n2);
    //  modify(n1); //-> n1,n2 are arguments
    /*int s = calculateSum(n1, n2);
    int l = findLargest(n1, n2);
    cout << "The Largest number is: " << l << endl;
    cout << "The Sum is: " << s + 3 * 10 << endl;*/

    return 0;
}

// Function definations

int getMarks() // Input Taking Functions Started with get 
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    while (marks < 0 || marks > 100)
    {
        cout << "Invalid Marks!!";
        cout << "Please Re-Enter your Marks: ";
        cin >> marks;
    }
    return marks;
}
/*
{
    cout << "Start of the swap function " << a << " " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "End of the swap function " << a << " " << b << endl;
}*/
/*int calculateSum(int a, int b)
{
    // cout << "This is my sum function " << endl;
    int sum = a + b;
    return sum;
}
int findLargest(int c, int d)
{
    int largeNum;
    if (c > d)
    {
        largeNum = c;
        // cout << "First Number is Largest " << endl;
    }
    else
    {
        largeNum = d;
        // cout << "Second Number is Largest " << endl;
    }
    return largeNum;
}*/

// void modify(int val) // val contain a COPY of n1 and only copy will ne modified
// {
//     cout << "Start of modify function " << val << endl;
//     val = val + 1;
//     cout << "End of modify function " << val << endl;
// }