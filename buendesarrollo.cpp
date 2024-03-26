#include <iostream>
using namespace std;

void vectorincent( int (&programadores)[1000][6] , int i , int (&vector)[1000] )
{
	
	int j = 0;
	
	for ( j = 0 ; j < i ; j++ )
	{
		
		vector[j] = programadores[j][5];
		
	}
	
}

void mostrar( int (&programadores)[1000][6] , int i )
{
	
	int j = 0 , h = 0;
	
	cout<<"Nº\tAnti\tLenguajeLineas\tErrores\tIncentivo\n";
	
	for ( j = 0 ; j < i ; j++ )
	{
		
		for ( h = 0 ; h < 6 ; h++ )
		{
			
			if ( h%5 == 0 && h != 0 )
			{
				
				cout<<programadores[j][h]<<endl;
				
			}else
			{
				
				cout<<programadores[j][h]<<"\t";
				
			}
			
		}
		
	}
	
	
	
}

int mejor( int (&programadores)[1000][6] , int i )
{
	
	int j = 0 , mejorprogramador = 9999;
	
	for ( j = 0 ; j < i ; j++ )
	{
		
		if ( (programadores[j][3] - programadores[j][3]) <  mejorprogramador )
		{
			
			mejorprogramador = programadores[j][0];
			
		}
		
	}
	
	return mejorprogramador;
}

int total( int (&programadores)[1000][6] , int i )
{
	
	int j = 0 , incentivostotales = 0;
	
	for ( j = 0 ; j < i ; j++ )
	{
		
		incentivostotales+=programadores[j][5];
		
	}
	
	return incentivostotales;
}

void incentivototal( int (&programadores)[1000][6] , int i , int errorestotales , int cantlineas )
{
	
	if ( errorestotales <= cantlineas )
	{
		
		programadores[i][5] = 0;
		
	}else
	{
		
		
		programadores[i][5] = programadores[i][1] + programadores[i][2] + programadores[i][3] - programadores[i][4];
		
		
	}
	
}


int errores( int (&programadores)[1000][6] , int i )
{
	
	int erroress = 0 , errorligico = 0 , cantidaddeerrores=0;
	
	
	cout<<"Ingrese la cantidad de errores de sintaxis\n";
	cin>>erroress;
	
	cout<<"Ingrese la cantidad de errores de logica\n";
	cin>>errorligico;
	
	programadores[i][4] = erroress * 100 + errorligico * 500;
	
	cantidaddeerrores = erroress + errorligico;
	
	return cantidaddeerrores;
}

int codigo( int (&programadores)[1000][6] , int i )
{
	
	int lineas = 0;
	
	cout<<"Ingrese la cantidad de lineas de codigo que ha programado en el mes \n";
	cin>>lineas;
	
	programadores[i][3] = lineas * 100;
	
	
	return lineas;
}

void lenguajes( int (&programadores)[1000][6] , int i )
{
	
	int lenguajes = 0;
	
	cout<<"Ingrese la cantidad de lenguajes de programacion con los que programo en el mes\n";
	cin>>lenguajes;
	
	if( lenguajes > 2 )
	{
		
		programadores[i][2] = 6000;
		
	}else
	{
		
		programadores[i][2] = 4000;
		
	}
	
}

void antiguedad( int (&programadores)[1000][6] , int i )
{
	
	int meses = 0;
	
	cout<<"Ingrese la cantidad de mese que hace que esta programando\n";
	cin>>meses;
	
	programadores[i][1] = meses * 500;
	
}

int main(int argc, char *argv[]) {
	
	int programadores[1000][6] , i = 0 , errorestotales = 0 , cantlineas = 0 , mejorp = 0 , empresa = 0 , vector[1000];
	int opciones = 0;
	
	do
	{
		
		cout<<"opciones\n1.\tCargar\n2.\tMostrar\n3.\tTotal icentivos pagados por la empresa\n4.\tMejor programador\n5.\tListado de inventivos totales\n0.\tCerrar programa\n";
		cin>>opciones;
		
		switch ( opciones )
		{
			
		case 1:
			
			programadores[i][0] = i + 1;
			antiguedad( programadores , i );
			lenguajes( programadores , i );
			cantlineas = codigo( programadores , i );
			errorestotales = errores( programadores , i );
			incentivototal( programadores , i , cantlineas , errorestotales );
			vectorincent( programadores , i , vector );
			i++;
			
			break;
		case 2:
			
			mostrar( programadores , i );
			
			break;
		case 3:
			
			empresa = total( programadores , i );
			cout<<"El total gastado por la empresa es de "<<empresa<<endl;
			
			
			break;
		case 4:
			
			mejorp = mejor( programadores , i );
			
			cout<<"El mejor programador es el programador nº "<<mejorp<<endl;
			
			break;
		case 5:
			
			for ( int h = 0 ; h < i ; h++ )
			{
				
				cout<<"Programador "<<h + 1<<vector[h]<<endl;
				
			}
			
			break;
		default:
			break;
		}
	}while ( opciones != 0 );
	
	
	
	return 0;
}

