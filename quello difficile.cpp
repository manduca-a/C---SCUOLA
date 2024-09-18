
#include <iostream>
#include <fstream>
#include <math.h>
#include <stdio.h>
using namespace std ;
int main ()
{
	system ("color 2F");
	int  x,a, b,c,d,e,f,g,perimetro, area, Cateto, cateto ;
    float ipotenusa, diagonale;
    
    cout <<"Inserisci 1 per il rettangolo"<<endl;
	cout <<"Inserisci 2 per il quadrato"<<endl;
	cout <<"Inserisci 3 per il triangolo"<<endl;
	cout <<"Inserisci 4 per il rombo"<<endl;
    cin >> x ;
  
    	if (x==1){ 
		 	// hai scelto il rettangolo//
	    					
				cout << "Inserire l'altezza" << endl ;
				cin >> a ;
				cout << "Inserire la base" << endl ;
				cin >> b ;
				perimetro=a+b+a+b ;
				cout<<"Il perimetro e " << perimetro << endl ;
				
				
				cout << "Inserire l'altezza" << endl ;
				cin >> a ;
				cout << "Inserire la base" << endl ;
				cin >> b ;
				area=a*b ;
				cout<<"l'area e " << area << endl ;
				
				cout << "Inserire l'altezza" << endl ;
				cin >> a ;
				cout << "Inserire la base" << endl ;
				cin >> b ;
				c=a*a;
			    d=b*b;
			    e=c+d;
				diagonale= sqrt(e);
				cout<<"La diagonale e " << diagonale << endl ;
			
			}
		if (x==2)
		{
				// hai scelto il quadrato
				
					cout << "Inserire il lato" << endl ;
					cin >> a ;
					perimetro=a*4 ;
					cout<<"Il perimetro e " << perimetro << endl ;
						
						
					cout << "Inserire il lato" << endl ;
					cin >> a ;
					area=a*a ;
					cout<<"l'area e " << area << endl ;
						
						
					cout << "Inserire il lato 1" << endl ;
					cin >> a ;
					diagonale=a*sqrt(2);
					cout<<"La diagonale e " << diagonale << endl ;
						
					system ("PAUSE") ;
					}
		if (x==3)
		{
				//hai scelto il triangolo
				
				cout<<"Per calcolare il perimetro digita 1"<<endl;
				cout<<" Per calcolare l'area digita 2"<<endl;
				cout<<" Per calcolare l'ipotenusa digita 3"<<endl; 
				cout<<" Per calcolare il cateto maggiore digita 4"<<endl;
				cout<<" Per calcolare il cateto minore digita 5"<<endl;
				cout<<" Per calcolare tutto digita 6:"<<endl;
				cin>> x ;
				if (x==1)
				{
					cout << "Inserire base" <<endl;
					cin >> a;
					cout << "Inserire l'altezza" <<endl;
					cin >> b;
					cout << "Inserisci la diagonale" <<endl;
					cin >> c;
					perimetro=a+b+c ;
					cout << "Il perimetro e' "<< perimetro << endl;
				}
				if (x==2)
				{
					cout << "Inserire base" <<endl;
					cin >> a;
					cout << "Inserire l'altezza" <<endl;
					cin >> b;
					cout << "Inserisci la diagonale" <<endl;
					cin >> c;
					area=a*b/2 ;	
					cout << "L'area e' "<< area <<endl;
				}
				if (x==3)
				{
					cout << "Inserisci cateto 1"<<endl;
					cin >> a;
					cout <<"Inserisci cateto 2"	<<endl;
					cin >> b;
					c=a*a ;
					d=b*b ;
					e=c+d ;
					ipotenusa= sqrt(e) ;
					cout<<"L'ipotenusa e' "<< ipotenusa <<endl;
				}
				if (x==4)
				{
					cout << "Inserisci ipotenusa"<<endl;
					cin >> a;
					cout <<"Inserisci cateto 2"	<<endl;
					cin >> b;
					c=a*a ;
					d=b*b ;
					e=c-d ;
					Cateto= sqrt(e) ;
					cout<<"Il cateto maggiore e' "<<Cateto<<endl;
				
				}	
				if (x==5)
				{
					cout << "Inserisci ipotenusa"<<endl;
					cin >> a;
					cout <<"Inserisci cateto 1"	<<endl;
					cin >> b;
					c=a*a ;
					d=b*b ;
					e=c-d ;
					cateto= sqrt(e) ;
					cout<<"Il cateto minore e' "<<cateto<<endl;
				
				}	
				if (x==6)
				{
					cout << "Inserire base" <<endl;
					cin >> a;
					cout << "Inserire l'altezza" <<endl;
					cin >> b;
					cout << "Inserisci la diagonale" <<endl;
					cin >> c;
					perimetro=a+b+c ;
					cout << "Il perimetro e' "<< perimetro << endl;
					cout << "Inserire base" <<endl;
					cin >> a;
					cout << "Inserire l'altezza" <<endl;
					cin >> b;
					cout << "Inserisci la diagonale" <<endl;
					cin >> c;
					area=a*b/2 ;	
					cout << "L'area e' "<< area <<endl;
					cout << "Inserisci cateto 1"<<endl;
					cin >> a;
					cout <<"Inserisci cateto 2"	<<endl;
					cin >> b;
					c=a*a ;
					d=b*b ;
					e=c+d ;
					ipotenusa= sqrt(e) ;
					cout<<"L'ipotenusa e' "<< ipotenusa <<endl;
					cout << "Inserisci ipotenusa"<<endl;
					cin >> a;
					cout <<"Inserisci cateto 2"	<<endl;
					cin >> b;
					c=a*a ;
					d=b*b ;
					e=c-d ;
					Cateto= sqrt(e) ;
					cout<<"Il cateto maggiore e' "<<Cateto<<endl;
					cout << "Inserisci ipotenusa"<<endl;
					cin >> a;
					cout <<"Inserisci cateto 1"	<<endl;
					cin >> b;
					c=a*a ;
					d=b*b ;
					e=c-d ;
					cateto= sqrt(e) ;
					cout<<"Il cateto minore e' "<<cateto<<endl;
				}	
				system ("PAUSE") ;
			}	
			
				
		 		if (x==4)
				{
						
		
					//hai scelto il rombo
					
					cout << "Inserire base" <<endl;
					cin >> a;
					cout << "Inserire l'altezza" <<endl;
					cin >> b;
					cout << "Inserisci la diagonale" <<endl;
					cin >> c;
					perimetro=a+b+c ;
					area=a*b/2 ;
					cout << "Il perimetro e' "<< perimetro << endl;
					cout << "L'area e' "<< area <<endl;
					cout << "Inserisci cateto 1"<<endl;
					cin >> a;
					cout <<"Inserisci cateto 2"	<<endl;
					cin >> b;
					c=a*a ;
					d=b*b ;
					e=c-d ;
					ipotenusa= sqrt(e) ;
				}		
		
	

}
	   



