#include <iostream>
#include <string>
using namespace std;

// Boolean Type Function
// Global Variables
bool is4digit(string);
int num = 10;
int main()
{
    string PIN;
    cout << "Enter a 4 digit pin: ";
    cin >> PIN;
    while (is4digit(PIN) == 0)
    {
        cout << "PIN Denied! ";
        cout << "Please Re-Enter new pin: ";
        cin >> PIN;
    }
    if (is4digit(PIN) == 1)
    {
        cout << "PIN Accepted! ";
    }
    cout << endl;
    cout << " The value of Global Variable is: " << num; // 0 default value
    int num = 120;
    cout << " The value of Local Variable is: " << ::num; // special variable do not modify value;

    return 0;
}

// Function defination

bool is4digit(string pin)
{
    bool status;
    if (pin.length() == 4)
    {
        // cout << "PIN Accepted! ";
        status = true;
    }
    else
    {
        // cout << "PIN Denied! ";
        status = false;
    }
    return status;
}

// Global Variable is automatically initialzed with default value
// Can be used in all functions because data is shared
// Global Variable value can be modified
// Global Value Defined outside main
// Each block of value take recent value of Global Variable