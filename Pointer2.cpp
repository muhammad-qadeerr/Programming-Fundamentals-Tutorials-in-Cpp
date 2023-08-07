#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    const int N = 5;
    int arr[N] = {1, 2, 3, 4, 5};

    int *pStart = nullptr, *pEnd = nullptr;
    pStart = &arr[0]; // arr index = 0,1,2,3,4
    pEnd = &arr[N - 1];
    // 2 Pointer Variables can be added but not be substracted.

    cout << pEnd - pStart << endl;

    // cout << pEnd + pStart;  // Can't be operated

    // Displaying the elements
    cout << "Elements of an Array are: " << endl;

    while (pStart <= pEnd) // Pointer Comparison
    {
        cout << *pStart << " ";
        pStart++;
    }
    return 0;
}
