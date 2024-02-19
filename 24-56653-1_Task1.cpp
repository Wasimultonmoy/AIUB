#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char characters;
    cout << "Welcome to Grammar Software."  << endl;
    cout << "Here you can find which word is Vowel & which word is Consonant" << endl;
    cout << "Tell me the word you want to know: ";
    cin >> characters;
    characters = tolower(characters);
    if(isalpha(characters))
    {
        switch (characters)
        {
            case 'a':
                cout << "The word is Vowel" << endl;
                break;
            case 'e':
                cout << "The word is Vowel" << endl;
                break;
            case 'i':
                cout << "The word is Vowel" << endl;
                break;
            case 'o':
                cout << "The word is Vowel" << endl;
                break;
            case 'u':
                cout << "The word is Vowel" << endl;
                break;
            default:
                cout << "This word is Consonant" << endl;
                break;

        }

    } else {
        cout << "It's not a characters." << endl;
    }
    cout << "Press any Key to Exit";
    getch();



}