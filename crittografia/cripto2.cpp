#include <iostream>
#include <string.h>
#define MAX 26
#define MAX2 100

using namespace std;

int main ()
{
    char alfabeto [MAX]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; //dichiarazione alfabeto
    char frase [MAX2]={0}; //dichiarazione frase
    int i=0,ii=0;
    
    cout<<"inserisci una frase da cifrare: ";
    cin.getline(frase, 100); //assegnazione a frase
    
    
        ii=-1;
        do
        {
            ii++;    //incrementa i
        } while (frase[i]!=alfabeto[ii]);
        
        if (ii<23)    cout<<alfabeto[ii+3];
        else switch (ii)
                    {
                        case 23: cout<<"A"; break;
                        case 24: cout<<"B"; break;
                        case 25: cout<<"C"; break;
                    }

    
    return 0;
}
