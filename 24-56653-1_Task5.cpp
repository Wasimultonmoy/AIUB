#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num, sum;

    cout << "Welcome to the Calculator!" << endl;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 3; i <=num; i +=3)
    {
        sum +=i;

    }
    cout << "Sum of numbers divisible by 3 between 1 and " << num << " would be: " << sum;
    cout << endl;
    cout << "Press any key to Exit." << endl;
    getch();
}