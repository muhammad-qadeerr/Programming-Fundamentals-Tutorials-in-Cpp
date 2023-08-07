// Demonstration of Pass by value and pass by reference

#include <iostream>
using namespace std;

int getDimensions(int &l, int &w)
{
    l = 5, w = 6;

    cout << "In function: " << l << " " << w;
    return l, w;
}

int main()
{
    int l1 = 2, w1 = 3;
    cout << "Start of the main: " << l1 << " " << w1 << endl;
    getDimensions(l1, w1);
    cout << "\nBack in main: " << l1 << " " << w1 << endl; // Exact value here due to reference instead of copy

    return 0;
}