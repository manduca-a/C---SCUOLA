/*Stampa di 5  elementi*/

#include <iostream> //libreria

using namespace std;

int main()
{
	
    int elem=5; //assegnamo 5 ad elem
	int elementi[elem]={0,6,4,2,9}; //dichiarazione variabile elementi + vettore elem con 5 elementi a scelta del programmatore

	
	
	for(int i=0; i<elem; i++) //ciclo for si esce da esso quando si superano i 5 elementi
	
	{
	 cout<<elementi[i]<<endl;  //stampa elementi
    }
    
    
    system("Pause");
    return(0);
}
