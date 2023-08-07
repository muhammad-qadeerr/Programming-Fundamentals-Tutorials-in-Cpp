#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    // double a = 3.145;
    // double b = 1.23, c;

    // c = sqrt(pow(a, 2) + pow(b, 2));

    // cout << "The Value Acording to Pathagorous Theoram is: " << setprecision(2) << c << endl;

    int max = 6;
    int min = 1, y;

    // radom_number = (rand() % (max - min +1)) + min;

    cout << "Generating Random Numbers......";
    y = (rand() % (max - min + 1)) + min;

    cout << y << endl;

    return 0;
}