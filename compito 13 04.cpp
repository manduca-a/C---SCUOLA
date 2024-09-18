//vettore di n interi con somma degli elementi positivi e negativi

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
	
 	cout<<"inserisci la dimensione del vettore: ";
 	cin>>n;
 	
 	
	for(i=0;i<n;i++ )
	{ 
	cout<<"inserisci un numero "<<i<<": ";    
	cin>>a[i];
	}
	    cout<<"I valori inseriti sono: ";
    	for(i=0;i<n;i++) {
		cout<<a[i];
		cout<<" ";	
	}
 	
		for (i=0;i<n;i++)
		  if (a[i]>=0) {
		  	a[i]=1;
			somma=somma+a[i]; 
			cout<<endl; 	
	  		}
		cout<<"la somma degli elementi positivi e' :"<<somma<<".";
		for (i=0;i<n;i++)
		  	if (a[i]<0) {
				a[i]=1;
				Somma=Somma+a[i]; 
			cout<<endl; 	
		  	}
		cout<<"la somma degli elementi negativi e' :"<<Somma<<".";

	
        
	

}
