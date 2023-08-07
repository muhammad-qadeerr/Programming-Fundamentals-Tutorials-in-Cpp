#include <iostream>
#include <cstdlib>
using namespace std;
void myFunction()
{
    /*int val = 15; // This is the local variable of the function
    cout << val << endl;
    val = val + 5; // Destroyred
    cout << "Value After: " << val << endl;*/

    // Static Local Variables

    /*static int val = 10; // Static Variable called once at first function call and modify it value at second call
    int num = 15;        // Static Variable is also initiazed with zero
    cout << val << "  " << num << endl;
    val = val + 5;
    num = num + 5;*/
}
// Function Overloading
// Different Functions with same name
// But must differ in the signature of the function
// Signature include name and parameter list
// int calculateSum(int, int);
// Default Argument Function

// Pass By Reference
// File handle must be Passed by reference
void tryToModify(int &);
float getDimensions(float &, float &);
// int calculateSum(int, int, int = 0);
int main()
{
    int n1 = 5, n2 = 10, n3 = 15;
    float l1, w1;
    cout << "Start of the main: " << l1 << w1 << endl;
    getDimensions(l1, w1);

    // tryToModify(n1);
    cout << "Back in main:" << l1 << w1 << endl; // Exact value here due to reference instead of copy
    // cout << EXIT_SUCCESS << endl;
    // cout << EXIT_FAILURE << endl;
    /* myFunction();
     myFunction();
     myFunction();*/
    // int temp = calculateSum(n1, n2);
    // int result = calculateSum(temp, n3);
    // cout << "The sum of three number is: " << temp << endl;
    // cout << " The sum is: " << calculateSum(n1, n2, n3);

    return 0;
}

// Function Definations

/*int calculateSum(int a, int b)
{

    return a + b;
}*/
/*void tryToModify(int &val)
{
    cout << "Start of the Function " << val << endl;
    val = val + 7;
    // exit(0);     // It will make the whole programm to exit
    cout << "End of the Function " << val << endl;
}*/
float getDimensions(float &l, float &w)
{
    float lenght, width;
    cout << "Enter Lenght: ";
    cin >> lenght;
    cout << "Enter Width: ";
    cin >> width;
    return lenght, width;
}
/*int calculateSum(int c, int d, int e)
{
    return c + d + e;
}*/
