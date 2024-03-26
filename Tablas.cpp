#include <iostream>
#include <ctime>
using namespace std;

void mostrar(int (&arreglo)[5][4])
{
	
	int i = 0;
	
	for ( i = 0 ; i < 5 ; i++ )
	{
		
		cout<<"Cuenta\tResultado Resultado correcto\n";
		cout<<arreglo[i][0]<<"x"<<arreglo[i][1]<<"\t"<<arreglo[i][2]<<"\t"<<arreglo[i][3]<<endl;
		
	}
	
}

int respuestas(int (&arreglo)[5][4])
{
	
	int i = 0 , correctas = 0;
	
	for ( i = 0 ; i < 5 ; i++ )
	{
		
		cout<<"¿Cuanto es "<<arreglo[i][0]<<" veces "<<arreglo[i][1]<<"?\n";
		cin>>arreglo[i][2];
		
		if ( arreglo[i][2] == arreglo[i][3] )
		{
			
			correctas++;
			
		}
	}
	
	return correctas;
}

void tablas( int (&arreglo)[5][4])
{
	
	int i = 0;
	
	srand(time(NULL));
	
	for ( i = 0 ; i < 5 ; i++)
	{
		
		arreglo[i][0] = 1 + rand()%9; 
		arreglo[i][1] = 1 + rand()%9;
		arreglo[i][3] = arreglo[i][0] * arreglo[i][1];
		
	}
	
}

int main(int argc, char *argv[]) {
	
	int arreglo[5][4] = {0} , respuestasC = 0;
	
	tablas( arreglo );
	respuestasC = respuestas( arreglo );
	mostrar( arreglo );
	
	if ( respuestasC == 5 )
	{
		
		cout<<"Felicitaciones!!\n";
		
	} else if ( respuestasC == 3 || respuestasC == 4 )
	{
		
		cout<<"Bien!!!Vas por buen camino.\n";
		
	}else
	{
		
		cout<<"Hay que practicar mas\n";
		
	}
	
	
	return 0;
}

