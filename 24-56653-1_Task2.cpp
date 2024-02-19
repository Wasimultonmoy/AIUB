#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number1, number2, number3, la_number, final_number;
    cout << "Welcome to Number Checker" <<endl;
    cout << "Tell me your 1st Number: ";
    cin >> number1;
    cout << "Tell me your 2nd Number: ";
    cin >> number2;
    cout << "Tell me your 3rd Number: ";
    cin >> number3;

    if(number1 > number2 && number1 > number3)
    {
        la_number = number1;
    } else if(number2 > number1 && number2 > number3){
        la_number = number2;
    } else {
        la_number = number3;
    }
    cout << "The Largest number is: "<< la_number << endl;
    if(la_number % 2 == 0)
    {
        cout << "The Largest number is an Even Number" << endl;
    } else {
        cout << "The Largest number is an odd number" << endl;
    }
    cout << endl;
    cout << "Press any to Exit";
    getch();
}