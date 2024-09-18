#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
using namespace std;

#define MAX 200

int main(void) 
{
   char string[MAX];

   cout << "Inserire frase:" << endl;
   cin.getline(string,MAX);

   printf("     Frase  normale: %s\n", string);
   printf("     Frase crittografata: ");

   for (int i=0, len=strlen(string) ; i<len; i++) 
   {
      if ( (string[i]>='A' && string[i]<='W') || (string[i]>='a' && string[i]<='w') ) 
      {
         // lettere dalla A alla W (maiuscole) e dalla a alla w (minuscole)
         printf("%c", string[i] + 3);
      }
      else if (isalpha(string[i]))
      {
         // tutte le altre lettere (X Y Z x y z)
         printf("%c", string[i] - 23);
      }
      else 
      {
         // tutti gli altri caratteri
         printf("%c", string[i]);
      }
   }
   cout << endl;
   
   return 0;
}
