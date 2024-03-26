#include <iostream>
using namespace std;

int rendimiento( int (&frasco)[3][7] )
{
	
	int i = 0 , mayorrendimiento = 9999;
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		
		if ( (frasco[i][1]-frasco[i][3]) < mayorrendimiento )
		{
			
			mayorrendimiento = frasco[i][0];
			
		}
		
	}
	
	return mayorrendimiento;
}

void vector( int (&frascos)[3] , int (&frasco)[3][7] )
{
	
	int i = 0;
	
	for ( i = 0 ; i < 3 ; i++)
	{
		
		frascos[i] = frasco[i][3];
		
	}
	
}

void mostrar( int (&frasco)[3][7] )
{
	
	int i = 0 , longitud = -25;

	cout<<"Codigo\tHectareaCosto\tCantidad Costo p Precio Recaudacion\n";
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		
		for ( int j = 0 ; j < 7 ; j++ )
		{
			if ( j != 0 && j%6 == 0 )
			{
				
				cout<<frasco[i][j]<<endl;
				
			}else 
			{
				
				cout<<frasco[i][j]<<"\t";
				
			}
			
		}
		
	}
	
}

int total( int (&frasco)[3][7] )
{
	
	int i = 0 , recaudaciontotal = 0;
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		
		recaudaciontotal+=frasco[i][6];
		
	}
	
	return recaudaciontotal;
}

void recaudacion( int (&frasco)[3][7] )
{
	
	int i = 0;
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		
		frasco[i][6] = frasco[i][3] * frasco[i][5];
		
		
	}
	
}

void precio( int (&frasco)[3][7] )
{
	
	int i = 0;
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		
		frasco[i][5] = frasco[i][4] + frasco[i][4] / 2;
		
	}
	
}


void costo( int (&frasco)[3][7] )
{
	
	int i = 0;
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		
		frasco[i][4] = frasco[i][2] / frasco[i][3];
		
	}
	
}

void cargar( int (&frasco)[3][7] )
{
	
	int i = 0;
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		
		frasco[i][0] = i + 1;
		
		cout<<"Ingrese las herctareas plantadas de la fruta "<<frasco[i][0]<<endl;
		cin>>frasco[i][1];
		cout<<"Ingrese el costo de produccion de la fruta "<<frasco[i][0]<<endl;
		cin>>frasco[i][2];
		cout<<"Ingrese la cantidad de frascos \n";
		cin>>frasco[i][3];
		
	}
	
}

int main(int argc, char *argv[]) {
	
	int frasco[3][7] = {0} , ganado = 0 , frascos[3] = {0} , mayor = 0;
	int opciones = 0;
	
	do
	{
		
		cout<<"Opciones\n1.\tCargar datos.\n2.\tMostrar el total ganado por la chacra\n3.\tFruta que mas rinde\n4.\tCantidades de frascos por fruta\n5.\tMostrar la matriz.\n0,\tFinaliza el programa\n";
		cin>>opciones;
		
		switch( opciones )
		{
			
		case 1:
			
			cargar( frasco );
			costo( frasco );
			precio( frasco );
			recaudacion( frasco );
			
			break;
		case 2:
			
			ganado = total( frasco );
			
			cout<<"El total ganado es de "<<ganado<<endl;
			
			break;
			
		case 3:
			
			mayor = rendimiento( frasco );
			
			cout<<"La fruta con mayor rendimiento es la fruta nº "<<mayor<<endl;
			
			break;
			
		case 4:
			
			vector ( frascos , frasco );
			
			for ( int h = 0 ; h < 3 ; h++ )
			{
				
				cout<<"Fruta "<<h+1<<"\t";
				cout<<frascos[h]<<endl;
				
			}
			
			break;
		case 5:
			
			mostrar ( frasco );
			
			break;
		
		}
		
	}while ( opciones != 0 );
	
	
	
	
	return 0;
}

