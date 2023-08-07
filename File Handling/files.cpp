#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    /*int num = 23;
    double val = 2.45;
    char ch = 'B';
    string s = "File Handling in C++";

    // Writtng data in the file

    ofstream fout; // File Handle
    fout.open("file1.txt");

    // Validation for creation of the file

    if (!fout)
    {
        cout << "ERROR Creating the file\n";
    }
    else
    {
        fout << num << endl;
        fout << val << endl;
        fout << ch << endl;
        fout << s << endl;
        fout.close();
    }*/

    // Reading data from the file

    /*ifstream fin;
    fin.open("data.txt");

    if (!fin)
    {
        cout << "ERROR Creating the file\n";
    }
    else
    {
        int num;
        double val;
        char ch;
        string s;

        fin >> num;
        fin >> val;
        fin >> ch;
        // fin >> s;     //Reads untill 1st whitespace -> Getline should be used
        fin.ignore();
        getline(fin, s); // fin.ignore must be used in this case when read string is on the next line to eliminate
        enter

        fin.close();

        cout << num << endl;
        cout << val << endl;
        cout << ch << endl;
        cout << s << endl;


    /*ifstream fin;
    fin.open("input2.txt");

    if (!fin)

    {
        cout << "ERROR Creating the file\n";
    }
    else
    {
        /*int a, b, c, d, e;
        int sum;

        fin >> a;
        fin >> b;
        fin >> c;
        fin >> d;
        fin >> e;
        fin.close();
       sum = a + b + c + d + e;
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;*/

    /* int num, sum = 0, count;
     double average;
     string s;

     fin >> count;
     for (int i = 0; i < count; i++)
     {
         fin >> num;
         sum = sum + num;
     }
     fin >> s;
     fin.ignore();
     getline(fin, s);
     fin.close();

     // average = sum / 5.0;

     // Static cast can also be used here
     average = static_cast<double>(sum) / 5;

     cout << "The sum of values written in the file is: " << sum << endl;
     cout << "The average of values written in the file is: " << average << endl;
 }*/
    string fileName;
    cout << "Enter file name: ";
    getline(cin, fileName);
    ifstream fin;
    fin.open(fileName);

    if (!fin)

    {
        cout << "ERROR Creating the file\n";
    }
    else
    {

        int num, sum = 0, count = 0;
        double average;
        // Reading data till end of the file
        //  extration operator reads every white space character
        // While getlline do not read newline and space characters
        fin >> num;
        // while (fin)
        // {
        //     count++;
        //     sum = sum + num;
        //     fin >> num;
        // }

        while (num != -99)
        {
            count++;
            sum = sum + num;
            fin >> num;
            continue;
        }

        // fin >> s;
        // fin.ignore();
        // getline(fin, s);
        fin.close();

        average = static_cast<double>(sum) / 5;
        cout << "The total number of iterations are: " << count << endl;
        cout << "The sum of values written in the file is: " << sum << endl;
        cout << "The average of values written in the file is: " << average << endl;

        return 0;
    }
}