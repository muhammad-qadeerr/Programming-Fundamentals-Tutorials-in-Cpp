#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    cout << "Enter the marks of the student: ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "You entered invalid marks!!" << endl;
    }
    else if (marks >= 90)
    {
        grade = 'A';
        cout << "Your are pass "
             << "and your grade is: " << grade << endl;
    }
    else if (marks >= 70)
    {
        grade = 'B';
        cout << "Your are pass "
             << "and your grade is: " << grade << endl;
    }
    else if (marks >= 60)
    {
        grade = 'C';
        cout << "Your are pass "
             << "and your grade is: " << grade << endl;
    }
    else if (marks >= 50)
    {
        grade = 'D';
        cout << "Your are pass "
             << "and your grade is: " << grade << endl;
    }
    else
    {
        grade = 'D';
        cout << "You are fail "
             << "and your grade is: " << grade << endl;
    }

    // int num; // Defination of the variable
    // int num1 = 5; // Initialization of the variable
    // Redecleration of the same variable will give you the error

    // Printing sum and Average of two numbers

    // int num1, num2, num3, sum = 0; // sum;
    //  sum = num1 + num2 + num3;
    // float avg;                     // for floating point numbers
    /* cout << "Enter three numbers: ";
     cin >> num1 >> num2 >> num3;
     avg = (num1 + num2 + num3) / 3.0;
     sum = num1 + num2 + num3;

     cout << " First Number is: " << num1 << endl;
     cout << " Second Number is: " << num2 << endl;
     cout << " Third Number is: " << num3 << endl;
     cout << "The sum of the numbers is: " << sum << endl;
     cout << "The average of the number is: " << avg << endl;

     cout << "************************Double/Float Type**************************" << endl;

     double num4, num5, num6, sum2 = 0; // sum;
                                        // sum = num1 + num2 + num3;
     double avg2;                       // for floating point numbers
     cout << "Enter three numbers: ";
     cin >> num4 >> num5 >> num6;
     avg2 = (num4 + num5 + num6) / 3;
     sum2 = num4 + num5 + num6;

     cout << " First Number is: " << num4 << endl;
     cout << " Second Number is: " << num5 << endl;
     cout << " Third Number is: " << num6 << endl;
     cout << "The sum of the numbers is: " << sum2 << endl;
     cout << "The average of the number is: " << avg2 << endl;

     if (num1 > num2)
     {
         cout << "Largest is: " << num1;
     }
     else if (num2 > num3)
     {
         cout << "Largest is: " << num2;
     }
     else if (num3 > num4)
     {
         cout << "Largest is: " << num3;
     }
     else if (num4 > num5)
     {
         cout << "Largest is: " << num4;
     }
     else
     {
         cout << "Largest is: " << num5;
     }*/
}

/*Variable name cant start with the digit
  vaiable can be alphabets and numbers
  vaiables can be (_)  Underscore
*/