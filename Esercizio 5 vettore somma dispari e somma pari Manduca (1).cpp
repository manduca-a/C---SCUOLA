//vettore di n interi con prodotto degli elementi pari e somma di quelli dispari

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){    
  	 { 
system("color 2B"); 
		}  
	int i,n;
	int a[n];
	int somma=0;
	int Somma=0;
	int prodotto=1;
	
 	cout<<"inserisci la dimensione del vettore: ";
 	cin>>n;
 	
 	
	for(i=0;i<n;i++ )
	{ 
	cout<<"inserisci un numero"<<i<<": ";    
	cin>>a[i];
	}
	    cout<<"I valori inseriti sono: ";
    	for(i=0;i<n;i++) {
		cout<<a[i];
		cout<<" ";	
	}
 	
		for (i=0;i<n;i++)
		  if (a[i]%2==0) {
			somma=somma+a[i]; 
			cout<<endl; 	
	  		}
		cout<<"la somma degli elementi pari e' :"<<somma<<".";
		for (i=0;i<n;i++)
		  	if (a[i]%2!=0) {
				Somma=Somma+a[i]; 
			cout<<endl; 	
		  	}
		cout<<"la somma degli elementi dispari e' :"<<Somma<<".";
	
	
        
	

}
