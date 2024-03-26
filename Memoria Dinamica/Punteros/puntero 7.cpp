#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int vector[8] ={ 4 , 5 , 8 , 2 , 3 , 1 , 1 , 3 } , suma = 0 ;
	float Promedio = 0;
	int *puntero = vector , i = 0;
	
	for ( i = 0 ; i < 8 ; i++)
	{
		
		suma = suma + *( vector + i );
		
	}
	
	Promedio =( float ) suma / 8;
	
	cout<<"La suma de todos los numeros es de "<<suma<<" y su promedio es de "<<Promedio<<endl;
	
	
	return 0;
}

