#include <iostream>
using namespace std;

int main()
{
    /* cout << "*********SIZE OF DATATYPES***********************" << endl;

     cout << "sizeof(int) : " << sizeof(int) << endl;
     cout << "sizeof(float) : " << sizeof(float) << endl;
     cout << "sizeof(double) : " << sizeof(double) << endl;
     cout << "sizeof(char) : " << sizeof(char) << endl;
     cout << "sizeof(string) : " << sizeof(string) << endl;
     cout << "sizeof(long int) : " << sizeof(long int) << endl;
     cout << "sizeof(long long int) : " << sizeof(long long int) << endl;
     cout << "sizeof(short int) : " << sizeof(short int) << endl;
     cout << "sizeof(signed int) : " << sizeof(signed int) << endl;
     cout << "sizeof(unsigned int) : " << sizeof(unsigned int) << endl;
     cout << "sizeof(unsigned long int) : " << sizeof(unsigned long int) << endl;*/

    /*int num;
    float per5;

    cout << "Enter a number: ";
    cin >> num;

    per5 = num * 0.05;

    cout << "5 percent of the number is: " << per5 << endl;*/

    int num = 12345, temp, sum = 0, i = 0;
    // int rev = 0, rem;
    // while (num != 0)
    //{
    /*rem = num % 10;       // 5
    rev = rev * 10 + rem; // 5
    num = num / 10;*/
    /* while (num != 0)
     {
       temp = num % 10;  // 5
         sum = sum + temp; // 5
         num = num / 10;   // 1234
       temp = num % 10;

         i++;
     }*/

    temp = num % 10;  // 5
    sum = sum + temp; // 5
    num = num / 10;   // 1234
    temp = num % 10;  // 4
    sum = sum + temp; // 9
    num = num / 10;   // 123
    temp = num % 10;  // 3
    sum = sum + temp; // 12
    num = num / 10;   // 12
    temp = num % 10;  // 2
    sum = sum + temp; // 14
    num = num / 10;   // 1
    sum = sum + num;
    // num = num / 10;
    //}

    cout << "The sum of the digits is: " << sum << endl;
}