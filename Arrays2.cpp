#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    const int N = 5;
    int marks[N] = {10, 12, 13, 20, 16}; // 0 --> 4 index can be accessed
    // Pre and post increments can be used in array and array index both.
    cout << marks[2] << endl;   // 13
    cout << marks[2]++ << endl; // 13
    cout << ++marks[2] << endl; // 15

    cout << marks[8] << endl; // No compile time error but runtime errors

    // NO-BOUND Checking is provided by C++;

    for (int i = 1; i < N; i++) // Off-by-one error.
    {
        cin >> marks[i];
    }
    // const int N = 5;
    //  ifstream fin("array.txt");
    //  if (!fin)
    //  {
    //      cout << "Enable to open file specified!!";
    //  }
    //  else
    //  {
    //      int marks[N];
    //      for (int i = 0; i < N; i++)
    //      {
    //          fin >> marks[i];
    //      }
    //      fin.close();
    //      int sum = 0;
    //      double avg;
    //      cout << "Marks of the students are: ";
    //      for (int i = 0; i < N; i++)
    //      {
    //          cout << marks[i] << endl;
    //          sum = sum + marks[i];
    //      }
    //      cout << endl;

    //     avg = static_cast<double>(sum) / 5;

    //     cout << "The average of the student's marks is: " << avg << endl;
    // }

    return 0;
}