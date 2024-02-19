#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int classheld, at_class;
    float percent_class;
    cout << "Welcome to AIUB Valid for Exam checking Software." << endl;
    cout << "Let's Check if you will able to give Exam or Not?" << endl;
    cout << "Tell me how many class has been held by AIUB: " << endl;
    cin >> classheld;
    cout << "Tell me how many class you attended: " << endl;
    cin >> at_class;

    percent_class = (float)at_class / classheld * 100;

    if(percent_class >= 80)
    {
        cout << "You was " << percent_class << "% Persent in the class. You are Eligible for the Exam";
    } else {
        cout << "Sorry, You was " << percent_class << "% Persent in the class. You are not Eligible for the Exam";
    }

    cout << endl;
    cout << "Press any key to Exit";
    getch();

}
