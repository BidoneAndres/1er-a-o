#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char abecedario[25] = {0};
	int i = 0 , j = 0 , h = 0;
	char *puntero = abecedario;
	
	for ( i = 0 ; i < 25 ; i++ )
	{
		
		*( puntero + i ) = ( char ) 65 + i;
		
	}
	
	cout<<"Abecedario en MAYUSCULA...\n";
	for ( j = 0 ; j < 25 ; j++ )
	{
		
		cout<<*( puntero + j )<<endl;
		
	}
	
	cout<<"Abecedario en Minuscuala...\n";
	for ( h = 0 ; h < 25 ; h++ )
	{
			
			cout<< ( char ) tolower( abecedario[h] )<<endl;
			
	}
		

	return 0;
}

