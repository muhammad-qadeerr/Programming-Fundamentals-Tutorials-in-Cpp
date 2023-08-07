#include <iostream>
#include <cstdlib>
using namespace std;

// void update(int *a, int *b)
// {
//     int c = *a * 5;
//     int d = *b * 5;
//     *a = d;
//     *b = c;
// }

int main()
{

    // Pointer --> Address

    int num = 22;

    cout << "Value of the variable is: " << num << endl;
    cout << "Size of the variable is: " << sizeof(num) << endl;
    cout << "Adress of the varible is: " << &num << endl;

    //.. We can't store adress of the variable in another variable
    // i.e we need a pointer variable to do this task.
    // int adresss = &num;
    // Pointer variable are declared according to datatype

    // Uses of * operator
    // 1st use: -> Multiplication operator
    // 2nd use: -> Defining a pointer variable
    // 3rd use: -> Deferencing operator/ indirection operator

    int *ptr;
    ptr = &num;
    cout << "ptr contain: " << ptr << endl;
    cout << "Size of ptr is: " << sizeof(ptr) << endl;
    // Size of all pointers on 32 bit machine is 4 and on 64 bit machine is 8.

    cout << sizeof(int *) << " " << sizeof(double *) << " " << sizeof(char *) << " " << sizeof(float *) << " " << sizeof(string *) << endl;
    cout << num << endl;
    cout << ptr << endl;
    cout << *ptr << endl; // Dereferencing to get the desired value at variable adress (num) and (*ptr) behave same
    int a, b;
    a = num + 2 * 5;  // Display same 32 in output
    b = *ptr + 2 * 5; // Display same 32 in output
    cout << a << " " << b << endl;

    // Pointers Initialization

    double *p1 = NULL; // Not a good practice to leave the poniter unInitialized so do it with NULL/0/nullptr
    double *p2 = 0;
    double *p3 = nullptr;

    cout << p1 << " " << p2 << " " << p3 << endl;

    int a, b;
    int *pa = &a, *pb = &b;

    // cin >> a >> b;
    // update(pa, pb);
    // cout << a << " " << b;

    // Relationship between Arrays and Pointers

    int arr[4] = {10, 11, 12, 13};
    int arr2[3] = {3, 4, 5};

    // int *sp = nullptr;
    int *sp = arr;   // Pointer contain the base adress of an array
    int *ptr1 = arr; // Contains the base address of an array
    cout << "Base adress of Array is: " << arr << endl;
    cout << "ptr1 pointer is: " << ptr1 << endl;
    ptr1 = arr2;
    for (int i = 0; i < 3; i++)
    {
        cout << ptr1 << " " << *ptr1 << endl;
        ptr1 = ptr1 + 1; // Pointer arthmetic which will ad up 4 bytes to move on next adress.
    }
    // cout << "Outside of array: " << *ptr1 << endl;
    cout << "Base adress of Array2 is: " << arr2 << endl;
    cout << "ptr1 pointer is: " << ptr1 << endl;

    // You can't modify the name of an array. put a pointer can be replaced or point some other array later on.

    cout << "Base Adress of array: " << arr << endl; // Base address of an array is a pointer.
                                                     // Now it can also be use to display array contents.

    for (int i = 0; i < 4; i++)
    {
        // sp = &arr[i];
        // cout << "Address of Element no. " << i << " : " << sp << " " << sp[i] << " " << endl;
        // cout << "Address of Element no. " << i << " : " << &arr[i] << " " << ptr1[i] << " " << endl;
        cout << *(arr + i) << " " << ptr1 + i << " " << sp + i << endl;

        // arr[i] (subscript notation) is equilent to *(arr + i) which is pointer notation.    // This addition is pointer arthmetic

        // Here ptr[i]  -->  *(ptr1[i] + i* Sizeof DataType)
        // Compiler automatically dereference it to display the value in case of an array.
    }
    cout << endl;

    return 0;
}