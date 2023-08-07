// Student data programm
#include <iostream>
using namespace std;
// Prototype of the requires=d functions
void getScores(double[], int);
double getTotal(double[], int);
double lowestScore(double[], int);
void fillArray(char[], int);
void showArray(const char[], int);

int main()
{
    // const int SIZE = 8;
    // char proCode[SIZE] = {'0', '0', '0', '0', '0', '0', '0', '0'};
    // fillArray(proCode, SIZE);
    // showArray(proCode, SIZE);
    /*int arr1[3] = {1, 2, 3};
    int arr2[3];
    arr2[3] = arr1[3];
    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i] << endl;
    }*/

    const int SIZE = 4;
    double scores[SIZE], totalScore, lowScore, average;

    // Calling the get score function

    // getScores(scores, SIZE);

    //  Calling the totalScore Function
    totalScore = getTotal(scores, SIZE);
    cout << "The total Scores are: " << totalScore << endl;
    lowScore = lowestScore(scores, SIZE);
    //  cout << "The Lowest score is: " << lowScore << endl;
    //  totalScore = totalScore - lowScore;
    //  average = totalScore / 3;
    //  cout << "The average after lowscore dropped is: " << average << endl;

    return 0;
}
// Definations of the functions
void fillArray(char arr[], int size)
{
    char code = 65;
    for (int k = 0; k < size; code++, k++)
    {
        arr[k] = code;
    }
}
void showArray(const char arr2[], int size)
{
    for (int k = 0; k < size; k++)
    {
        cout << arr2[k] << " ";
        // cout << endl;
    }
}
void getScores(double s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Student's Score for Test No. " << i + 1 << " : ";
        cin >> s[i];
    }
}
double getTotal(double t[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + t[i];
    }
    return total;
}
double lowestScore(double l[], int size)
{
    // Setting first index as 0 for comparison to others

    double lowest = l[0];
    for (int i = 1; i < size; i++)
    {
        if (l[i] < lowest)
        {
            lowest = l[i];
        }
    }
    return lowest;
}