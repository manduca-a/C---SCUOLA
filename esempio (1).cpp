#include <iostream>

using namespace std;

int main()
{
	int num_alunni=31;
	int voti[num_alunni];
	
	//carcicamento
	for(int i=0; i<num_alunni; i++)
	
	{
	 cout<<"Inserire il voto per l'alunno n."<<i<<": ";
	 cin>>voti[i];
    }
    
    
    
    system("Pause");
    return(0);
}
