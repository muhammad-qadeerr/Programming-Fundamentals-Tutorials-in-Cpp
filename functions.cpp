#include <iostream>
using namespace std;

// Function Header - Function Defination
void myFunction() // Void fucnction wont return anything
{
    cout << "Inside myFunction\n";
}
// Prototype of the  myFunction2
// void myFunction2();

// void sum(int a, int b) // Local variables a, b cant be accessed in main
// {                      // a,b -> Parameters
//     int sum = a + b;
//     cout << "The sum of following number is: " << sum << endl;
// }

// void firstFunction()
// {
//     cout << "Inside firstFunction\n";
// }
// void secondFunction()
// {
//     cout << "Inside secondFunction\n";
//     firstFunction();
//     cout << "End of Second Function\n";
// }
int main()
{

    // cout << "Start of the main" << endl;

    // sum(10, 12); vlaues can also be hardcoded and also stored in the variables to get sum by calling sum function

    // int n1 = 10, n2 = 9;
    // // n1, n2 -> Arguments
    // sum(n1, n2); // Local variables n1, n2 cant be accessed in sum function
    // cout << "After Function Call - Back in main" << endl;
    // // Calling a Function
    for (int i = 0; i < 5; i++)
    {
        myFunction();
    }

    // secondFunction();

    // myFunction();
    // myFunction2(); // Prototype given on the top and defination at the end.

    return 0;
}
// Defination of the function and prototype id given on the top
// void myFunction2() // Void fucnction wont return anything
// {
//     cout << "Inside myFunction2\n";
// }