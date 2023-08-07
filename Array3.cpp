#include <iostream>
using namespace std;

void displayArray(const int[], int); // Prototype of a function
// void displayDoublesArray(double [], int);
int sumOfArray(const int[], int);

int main()
{
    // Write C++ code here
    const int N = 5;
    int arr[N] = {10, 11, 12, 14, 15};
    int arr1[4] = {34, 56, 67, 78};
    // int arr2[6]={34,23,23,24,25,23};
    // double arr3[N] = {10.2, 11.2, 33.3, 4.5, 56.4};
    // Calling a generic function
    // cout << "Base address in main " << arr << endl;
    displayArray(arr, N); // same in first call and change in furthur
    // displayArray(arr, N);
    // displayArray(arr, N);
    // displayArray(arr, N);
    // displayArray(arr2, 6);
    // displayDoublesArray(arr3, N);

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of array is " << sum << endl;
    cout << "\nThe Sum of Array Elements is: " << sumOfArray(arr, N);
    cout << "\nThe Sum of 2nd Array Elements is: " << sumOfArray(arr1, 4);

    return 0;
}
// Defination of a function
//  Passing size to the array for making function generic
// Const keyword won't allow to modify the array in that function and it must be writtenin function prototype
void displayArray(const int a[], int size)
{
    // cout << "Base Adress in Function " << a << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
        // a[i] = a[i] + 5;
    }
    cout << endl;
}
/*void displayDoublesArray(double b[], int s)
{
    for(int i=0; i<s; i++)
{
    cout<<b[i]<<" ";
}
cout<<endl;*/
int sumOfArray(const int d[], int size) // Used const keyword because this function don't have a
                                        // right to modify the array.This is called Principe of Privilidge.
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += d[i];
    }
    return sum;
}

// Function Overloading Concept
//- We can have a same name for two functions but their
// different signature i.e. parameter list and it will distinguish
// both of the functions.