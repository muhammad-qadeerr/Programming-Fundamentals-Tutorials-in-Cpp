#include <iostream>
#include <cmath>
#include <iomanip> //Required for setw() and setprecision()
#include <string>
using namespace std;

const int MAX = 1000; // Global Variable
int main()
{

    double tax, tip, totalBill; // local Variables.
    double mealCharges = 88.67;

    tax = (mealCharges / 100) * 6.75;
    totalBill = mealCharges + tax;
    tip = ((totalBill) / 100) * 20;

    cout << "The Total Bill is: " << totalBill << endl;
    cout << "The Tax Amount is: " << tax << endl;
    cout << "The Tip Amount is: " << tip << endl;
    return 0;

    // MAX = 200;
    int marks;
    bool value = false;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 50)
    {
        // MAX = 1000;
        int val = 12; // Local Variable
        value = true;
    }
    // MAX = 12000;

    if (marks)
    {
        cout << "Dear you are pass!!!" << endl;
    }
    else
    {

        cout << "You are fail!!" << endl;
    }

    double radius, area;
    const double PI = 3.14158;

    cout << "Enter the Radius: ";
    cin >> radius;
    area = PI * pow(radius, 2.0);

    cout << "The area of the circle is: " << area << endl;

    // TypeCasting

    /*double num = 65.4;
    char alf1 = 'b';
    char alf2 = 'S';

    cout << "You entered: " << static_cast<int>(num) << endl;
    cout << "ASCII of alf1 is: " << static_cast<int>(alf1) << endl;
    cout << "ASCII of alf2 is: " << static_cast<int>(alf2) << endl;
    */

    // Formatting the output

    /* int a = 10, b = 12, c = 23, d = 34, e = 34, f = 45;

     cout << a << setw(10) << b << setw(10) << c << endl;
     cout << d << setw(10) << e << setw(10) << f << setw(10) << endl;
     */

    /*double a = 3.13546;

    double b = 4.1566787864579, c;

    c = a + b;

    cout << setprecision(5) << c << showpoint << endl;
    cout << setprecision(6) << c << endl;
    cout << setprecision(7) << c << endl;
    cout << setprecision(8) << c << endl;
    cout << setprecision(9) << c << endl;
    cout << setprecision(10) << c << endl;
    */

    // Strings

    /*string name;
    string city;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Hi your Name is: " << name << endl;
    cout << "And your city is: " << city << endl;
    */

    // Use of Getline Function

    int num;
    char ch;

    // cout << "Enter a Number: ";
    // cin >> num;
    // cin.ignore(); // Ignores the newline
    // cout << "Enter a Character: ";
    // // cin >> ch;
    // cin.get(ch); // reads space

    // // ch = cin.get();

    // cout << "You Entered: " << ch << endl;

    // char ch4;
    // cout << "Enter another character: ";

    // cin.get(ch4);
    // ch4 = cin.get();

    // cout << "Size of ch is: " << sizeof(ch) << endl;
    // cout << "Size of ch4 is: " << sizeof(ch4) << endl;

    // char c3 = ' c ';
    // cout << c3 << endl;

    // char ch1;

    // cout << "Enter a character: ";
    // ch1 = cin.get();

    // std::cout << "You entered: " << ch << endl;

    // int noOfStudents = 0;
    // int no_of_students = 0;
    // int 1no;
    // int float;

    return 0;
}