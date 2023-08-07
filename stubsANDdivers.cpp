#include <iostream>
#include <cmath>
using namespace std;

void displayHypotenuse(double s1, double s2);

int main()
/*{
    double side1, side2;
    cout << "Enter two sides of the triangle: ";
    cin >> side1 >> side2;
    displayHypotenuse(side1, side2);

    return 0;
}*/
// Main implementation to just check a function
{
    displayHypotenuse(1, 2);
    displayHypotenuse(2.3, 3.4);
}
// Dummy implementation(STUBS)
/*void displayHypotenuse(double s1, double s2)
{
    cout << "Function has been called...";
    cout << "Values are: " << s1 << " " << s2 << endl;
}*/

void displayHypotenuse(double s1, double s2)
{
    cout << "The Values are: " << s1 << " " << s2 << endl;
    int h = sqrt(s1 * s1 + s2 * s2);
    cout << "The lenght of hypotenuse is: " << h << endl;
}
