/*La signora Rosa pensa a dei numeri quando non è stanca. Vuole che la aiuti a farne la somma, fai attenzione
 perchè la signora Rosa ti comunica un numero alla volta e se si stanca(può esserlo anche subito prima di averti comunicato un qualsiasi numero) 
 vuole sapere la somma dei numeri per poi andare a dormire tranquilla. */


#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main()
{
	system("color 2E"); //scelta colore 
	int a, b, c, i, x, y, somma, Somma;
	cout<<("Sei stanca?")<<endl;
	cout<<("Digitare 1 se si.")<<endl;
	cout<<("Digitare 2 se no.")<<endl;
	cin>>x;
	if (x==1)
	{
		cout<<("VAI A DORMIRE")<<endl;
		
		system("pause");
		return(0);
	}
	if (x==2)
	{
		srand (time(NULL)); // inizializzare il generatore di numeri 
		for(i=0;i<1;i=i+1)
		{
			a=rand()%100;	//generazione casuale di un numero compreso tra 0 e 99
			cout<<("Il numero e'")<<a<<endl;
			Sleep(1000); //pausa
		}
	}
	
	for(i=0;i<1;i=i+1)
	{
		b=rand()%100;
		cout<<("Il numero e'")<<b<<endl;
		Sleep(1500);
		somma=a+b;
		cout<<("La somma e' ")<<somma<<endl;
	}
	Sleep(1000);
	cout<<("Premi 1 se non sei stanca.")<<endl;
	cout<<("Premi 2 se sei stanca.")<<endl;
	cin>>y;
	
	if (y==1)
	{
		for(i=0;i<1;i=i+1)
		{
			c=rand()%100;
			cout<<("Il numero e' ")<<c<<endl;
			Sleep(1500);
			Somma=somma+c;
			cout<<("La somma e' ")<<Somma<<endl;
		}
	}
	else
	{
	 	cout<<("VAI A DORMIRE")<<endl;
	}
	system("pause");
	return(0);
}	
	
	
