//Stampa di 3 elementi inseriti da tastiera
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	//Dichiarazione ed eventuale inizializzazione di un Array
	int Elementi[3];
	//CARICAMENTO
	for (int i=0; i<3; i++)
	{
		cout<<"Inserisci un numero"<<endl;
		cin>>Elementi[i];
		cout<<"Elemento: "<<Elementi[i]<<endl;
		Sleep(100);
	}
}
