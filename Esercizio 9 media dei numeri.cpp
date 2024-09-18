// Calcolare la media di un vettore.
#include <iostream>

using namespace std;

int main()
{
	int i;
	int n;
	
	int s=0;
	float m=0;
	double conta=0;
	
	cout<<"Inserisci il numero di elementi"<<endl;
	cin>>n;
	cout<<n<<" e' il numero di elementi."<<endl;
	cout<<endl;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"Inserisci un numero: "<<endl;
		cin>>a[i];
		s=s+a[i];
	
	}
		m=s/n;
	cout<<"La somma dei numeri e': "<<s<<endl;
	cout<<endl;
	cout<<"La media dei numeri e': "<<m<<endl;
	
	for(i=0;i<n;i++)
	{
	if(a[i]>m)
	{
		conta=conta+1;
	}
	}
		cout<<"I numeri sopra la media sono: "<<conta<<endl;
	
	system("pause");
	return(0);
}
