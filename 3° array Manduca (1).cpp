//Stampa di n  elementi con n da input e stampa

#include <iostream> //libreria

using namespace std;

int main()
{
	
    int elem; //il valore verra' assegnato dall'utente
	int elementi[elem]; //dichiarazione variabile elementi , il contenuto del vettore (elem) verra' inserito dall'utente.

	cout<<"Inserisci il numero di elementi da inserire:"<<endl;
	cin>>elem;
	
	for(int i=0; i<elem; i++) //ciclo for, si esce da esso quando si superano gli n elementi; i=variabile contatore.
	
	{
	  cout<<"inserisci un numero per l'elemento "<<i<<": ";
	  cin>>elementi[i];    
	  cout<<"Contenuto nel vettore : "; 
	  cout<<elementi[i]<<endl; //Stampa elementi
    }
    
    
      
    
    system("Pause");
    return(0);
}
