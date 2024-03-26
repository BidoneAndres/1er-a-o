#include <iostream>
using namespace std;

void MAYUSCULA( char * );
void minuscula( char * );

int main(int argc, char *argv[]) {
	
	
	char abecedario[25] = {0};
	char *puntero = abecedario;
	int i = 0 , j = 0;
	
	MAYUSCULA( puntero );

	cout<<"Abecedario en MAYUSCULA...\n";
	for ( j = 0 ; j < 25 ; j++ )
	{
		
		cout<<*( puntero + j )<<endl;
		
	}
	
	minuscula( puntero );
	
	cout<<"Abecedario en minuscula...\n";
	for ( i = 0 ; i < 25 ; i++ )
	{
		
		cout<<*( puntero + i )<<endl;
		
	}
	
	return 0;
}


void minuscula( char *puntero )
{
	int h = 0;
	
	for ( h = 0 ; h < 25 ; h++ )
	{
		
		(char)tolower( *(puntero+h) );
		
	}
	
}

void MAYUSCULA( char *puntero )
{
	int i = 0;
	
	for ( i = 0 ; i < 25 ; i++ )
	{
		
		*( puntero + i ) = ( char ) 65 + i;
		
	}
	
}
