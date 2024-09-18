#include <iostream>
#include <string.h>
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main() 
{
   int i;
   char cript[100];

   #define MAX 200

   cout << "Inserire frase:" << endl;
   cin.getline(cript,MAX);

   cout<<("     Frase  normale: ")<< cript<<endl;
   cout<<("     Frase crittografata: ");

   for (i=0; i<=26; i++) 
   {
      if ( (cript[i]>='A' && cript[i]<='Z') || (cript[i]>='a' && cript[i]<='z') ) 
      {
         // lettere dalla A alla Z (maiuscole) e dalla a alla z (minuscole)
         
    	 cout<<(cript[i+3])<<endl;
		 cout <<(cript[i+4]);
      }
      
	  else 
      {
         // tutti gli altri caratteri
         cout<<(cript[i]-20);
      }
   }
   cout << endl;
   
   return 0;
}
