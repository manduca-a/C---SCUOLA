#include <iostream>

using namespace std;


main ()
{
	int nascita, eta, anno ;
	string nome ;
	cout <<"Inserisci il nome:"<<endl;
	cin >> nome;
	cout <<"Inserisci l'anno attuale"<<endl;
	cin >> anno;
	cout <<"Inserisci l'anno di nascita"<<endl;
	cin >> nascita;
	eta=anno-nascita ;
	cout <<nome<<"ha"<<eta<<"anni" <<endl;
	system("pause");
	return 0;
	
}
