#include <iostream>
#include<string>
using namespace std ;
int main()
{
    string text ;
    int answer ;
    cout << "enter the text: " ;
    getline(cin,text) ;
    cout << "what do you like to do?\n1- Cipher a message\n2- Decipher a message\n3- End\n" ;
    cin >> answer ;

    if (answer == 1)
    {
        int x = text.length() ;
        for (int n=0 ; n<x ; n++) 
        {
            char newtext ;
            if (text[n] != ' ')
            {
                if (isupper(text[n]))                               // for cipher capital letters
                {
                    newtext = 'Z'- (text[n]-'A') ;                      // To find the cipher letter
                    cout << newtext ;                               // for print each cipher letter
                }
                else                                                // for cipher small letters
                {
                    newtext = 'z'- (text[n]-'a') ;                      // To find the cipher letter
                    cout << newtext ;                               // for print each cipher letter
                }
            }
            else
            {
                newtext =' ' ;                      // for print spaces
                cout << newtext ; 
            }
        }
    }

    else if (answer == 2)
    {
        int x = text.length() ;
        for (int n=0 ; n<x ; n++) 
        {
            char newtext ;
            if (text[n] != ' ')
            {
                if (isupper(text[n]))                               // for cipher capital letters
                {
                    newtext = 'Z'- (text[n]-'A') ;                      // To find the cipher letter
                    cout << newtext ;                               // for print each cipher letter
                }
                else                                                // for cipher small letters
                {
                    newtext = 'z'- (text[n]-'a') ;                      // To find the cipher letter
                    cout << newtext ;                               // for print each cipher letter
                }
            }
            else
            {
                newtext =' ' ;                      // for print spaces
                cout << newtext ;
            }
        }
    }

    else if (answer == 3)
    cout << "ok we are very happy to help you anytime" ;
     
}
