#include <iostream>
#include <string.h>
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main() 
{
	int s, salto, cesare, S, lung, i;
	char alfabeto[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	cout<<"L'alfabeto e' "<<(alfabeto)<<endl;
	for (i=0; i<=26; i++)
	{
		if (s==alfabeto[26])
		{
			cout<<(alfabeto[i+salto])<<endl;
			system("break");
		}
	}
	char cript[100];
	
	cout<<("Inserisci il messaggio da criptare > ")<<endl;
	cin>>cript[100];
	S=rand()%26;
	lung=strlen(cript);
	for (i=0; i<lung; i++)
	{
		cout<<cript+salto;
	}
}
