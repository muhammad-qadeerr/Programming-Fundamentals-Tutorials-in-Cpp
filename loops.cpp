#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
            // break;  //Skip the rest of the itrations
            continue; // continue with the next itration of the loop
        cout << "\t" << i << endl;
        ;
    }

    // cout << " Value of i outside the loop is: " << i << endl;

    // double num;
    // char choice;

    // cout << "Enter a Number: ";
    // cin >> num;

    // for (int count = 1; count <= 10; count++)
    // {
    //     cout << "The number " << num << " Raise to the power of " << count << " is: " << pow(num, count) << endl;

    //     cout << "Enter Q to quit and any key to continue..." << endl;
    //     cin >> choice;

    //     if (choice == 'Q' || choice == 'q')
    //         break;
    // }

    // Loop within a loop -> Nested Loop

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << i << " " << j << endl;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= 10; i++) // Dtermine number of rows
    // {
    //     for (int m = 1; m <= i; m++)
    //     {
    //         cout << "#";
    //     }

    //     for (int j = 1; j <= 10 - i; j++) // Determine number of coloums
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    //     // for (int j = 1; j <= 10 - i; j++)
    //     // {
    //     //     cout << "*";
    //     // }
    //     // cout << endl;
    // }
    // int a = 1;
    // do
    // {
    //     cout << "Pakistan" << endl;
    //     a++;
    //     /* code */
    //     // cout << "Do You Want To Continue(Y/N)";
    //     // cin >> a;
    // } while (a != 5);

    return 0;
}

// Counter-Contol loops
//        Loops have a known condition for and while loop can be used for this purpose

// Sentinal Loops
//        Loops have to special character to follow for the breakdown of itrations