#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int f_num = 0, s_num = 1, temp_sum, num;
    cout << "Welcome to Fibonacci Calculator" <<endl;
    cout << "Tell the numbers of term will be print of Fibonacci Series" << endl;
    cin >> num;

    cout << "The Series: " <<endl;
    for(int i =0; i <num; i++)
    {
        cout << f_num <<endl;
        temp_sum = f_num + s_num;
        f_num = s_num;
        s_num = temp_sum;
    }

    cout << endl;
    cout << "Press any to exit";
    getch();
}