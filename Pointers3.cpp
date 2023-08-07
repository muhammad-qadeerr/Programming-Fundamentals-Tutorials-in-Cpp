#include <iostream>
using namespace std;
// Pointer a Function Parameter
void displayValue(const int *);
// Display array with the help of a pointer.
void displayArray(const int *, int); // *int bcz Array name is the base address and base address in an integer pointer.
int getInput();
void getInput(int &);
void getInput(int *);
int main()
{
    const int N = 5;
    int arr[N] = {11, 12, 13, 14, 25};
    displayArray(arr, N);

    int num = 15;
    int *p1 = &num;
    cout << "The value of num in main: " << num << " " << *p1 << endl;
    cout << "Address of pointer in main: " << &p1 << endl;
    displayValue(p1);
    // displayValue(&num)
    cout << "The value of Num back in main is: " << num << " " << *p1 << endl;

    int val;
    val = getInput();
    getInput(val);
    getInput(&val);
    cout << "The value of Val is: " << val;
    return 0;
}

void displayValue(const int *pVal) // Pointer is passed to the function by value i.e Copy will be made
{                                  // i.e pVal will be created as the copy of p1 and pVal will be destroyed after function call.
    cout << "Address of pointer function: " << &pVal << endl;
    cout << "The Value is: " << *pVal << endl;
    //*pVal = 50; // it modifies the value of the pointer.
    pVal = nullptr; // This only change the value of pVal to 0 but has no effect on
}
void displayArray(const int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        // cout <<&a[i]<< " "<<a[i] << " ";   // this is a subscript notation
        //  Can be displayed using a pointer notation i.e.
        cout << a + i << " " << *(a + i) << "\n ";
    }
    cout << endl;
}
int getInput()
{
    int n;
    cout << "Enter the integer: ";
    cin >> n;
    return n;
}
void getInput(int &n)
{

    cout << "Enter the integer: ";
    cin >> n;
}
void getInput(int *n)
{
    cout << "Enter the integer: ";
    cin >> *n;
}