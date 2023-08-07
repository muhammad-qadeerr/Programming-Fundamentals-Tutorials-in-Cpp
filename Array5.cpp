// Important functions implimentation using Array
#include <iostream>
#include <string>
using namespace std;
// Functions Prototypes
void displayArray(const int[], int);
int findMax(int[], int);
int findMin(int[], int);
void doubleUpArray(int[], int);
int calculateSum(const int[], int);
void getValues(int[], int);
bool copyArray(const int[], int, int[], int);
bool reverseCopyArray(const int[], int, int[], int);
int linearSearch(int[], int, int);
string linearSearch(string[], int, string);

int main()
{
    const int SIZE = 5;
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int arr2[SIZE];
    int arr3[SIZE];
    string arr4[SIZE] = {"Ali", "Ahmad", "Ashgar", "Olivia", "Night"};
    // Caling the functions
    // displayArray(arr, SIZE);
    cout << "The Maximum Elements is: " << findMax(arr, SIZE) << endl;
    cout << "The Minimum Elements is: " << findMin(arr, SIZE) << endl;
    cout << "Sum of the elements is: " << calculateSum(arr, SIZE) << endl;
    // doubleUpArray(arr, SIZE);

    bool flag = copyArray(arr, SIZE, arr2, SIZE);
    if (flag == false)
    {
        cout << "Error!! Array Size must be same for copy ";
    }
    else
    {

        displayArray(arr, SIZE);
        cout << "\n";
        displayArray(arr2, SIZE);
    }
    cout << "\n";
    bool flag1 = reverseCopyArray(arr, SIZE, arr3, SIZE);
    if (flag1 == false)
    {
        cout << "Error!! Array Size must be same for copy ";
    }
    else
    {

        displayArray(arr, SIZE);
        cout << "\n";
        displayArray(arr3, SIZE);
    }
    cout << "\n";
    // getValues(arr2, SIZE);
    int n;
    cout << "Enter the element you want to search in Array: ";
    cin >> n;
    int index = linearSearch(arr, SIZE, n);
    if (index == -1)
    {
        cout << "Value not found" << endl;
    }
    else
    {
        cout << "Value Found in Array at index:  " << index;
    }
    cout << endl;
    // String LinearSearch
    // string s;
    // cout << "Enter the String you want to search in Array: ";
    // cin >> s;
    // string index1 = linearSearch(arr4, SIZE, s);
    // if (index1 == -1)
    // {
    //     cout << "Value not found";
    // }
    // else
    // {
    //     cout << "Value Found in Array at Index: " << index1;
    // }

    return 0;
}

// Functions Definations
// When we pass an array into a function, then base adress of that array is passed actually.
void displayArray(const int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
int findMax(int a[], int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int findMin(int a[], int size)
{
    int min = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
void doubleUpArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = a[i] * 2;
        cout << a[i] << "  ";
    }
}
int calculateSum(const int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}
void getValues(int a[], int size)
{
    cout << "Enter " << size << " Values: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}
bool copyArray(const int a[], int size1, int b[], int size2)
{
    if (size1 != size2)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < size1; i++)
        {
            b[i] = a[i];
        }
    }
    return true;
}
bool reverseCopyArray(const int a1[], int size1, int a2[], int size2)
{
    if (size1 != size2)
    {
        return false;
    }
    else
    {

        for (int i = 0, j = size1 - 1; i < size1; i++, j--)
        {
            a2[i] = a1[j];
        }
    }
    return true;
}
int linearSearch(int a[], int size, int key)
{
    int i = 0;
    while (i < size)
    {
        if (a[i] == key)
        {
            return i;
        }
        i++;
    }
    return -1;
    // for loop Implimetation
    // for (int i = 0; i < size; i++)
    // {
    //     if (a[i] == key)
    //     {
    //         return true;
    //     }
    // }
    // return false;
}
// bool linearSearch(string a[], int size, string key)
// {
//     int i = 0;
//     while (i < size)
//     {
//         if (a[i] == key)
//         {
//             return i;
//         }
//         i++;
//     }
//     return -1;
// }
