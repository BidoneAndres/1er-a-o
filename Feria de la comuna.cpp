#include <iostream>
using namespace std;

int total( int (&matriz)[1000][5] , int i )
{
	int total = 0 , j = 0;
	
	for ( j = 0 ; j < i ; j++)
	{
		
		total+=matriz[j][3];
		
	}
	
	return total;
}

void espectaculo(int (&matriz)[1000][5] , int i )
{
	int j = 0;
	
	cout<<"Nº\tRubro\tMesas\tMonto\tSector\n";
	
	for ( j = 0 ; j < i ; j++ )
	{
		
		if( matriz[j][1] == 3)
		{
			
			cout<<matriz[j][0]<<matriz[j][1]<<matriz[j][2]<<matriz[j][3]<<matriz[j][4]<<endl;
			
		}
		
	}
	
	
}

void mostrar( int (&matriz)[1000][5] , int i )
{
	int j = 0;
	
	cout<<"Nº\tRubro\tMesas\tMonto\tSector\n";
	
	for ( j = 0 ; j < i ; j++ )
	{
		
		cout<<matriz[j][0]<<"\t"<<matriz[j][1]<<"\t"<<matriz[j][2]<<"\t"<<matriz[j][3]<<"\t"<<matriz[j][4]<<endl;
		
	}
	
	
}

void sectores( int (&matriz)[1000][5] , int i )
{
	
	int j = 0;
	
	if ( matriz[i][1] == 3 )
	{
		
		matriz[i][4] = 0;
		
	}else
	{
		
		matriz[i][4] = j + 1;
		j++;
		
	}
	
}

void cargar( int (&matriz)[1000][5] , int i )
{	
	int rubro = 0 , sillas = 0;
	
	matriz[i][0] = i+1;
	
	do
	{
		
		cout<<"Ingrese a que rubro pertenece\n1.\tArtesania\n2.\tGastronomia\n3.\tEspectaculo\n";
		cin>>rubro;
		
		if ( rubro < 1 || rubro > 3 )
		{
			
			cout<<"El numero ingresado no corresponde a ningun rubro\n";
			
		}else
		{
			
			matriz[i][1] = rubro;
			
		}
		
	}while ( rubro < 1 || rubro > 3 );
	
	do
	{
		
		cout<<"Ingrese si va a requerir sillas\n0.\tNO\n1.\tSI\n";
		cin>>sillas;
		
		if ( sillas == 0 || sillas == 1)
		{
			
			matriz[i][2] = sillas;
			
		}else
		{
			
			cout<<"El numero ingresado no corresponde a ninguna opcion\n";
			
		}
		
	}while( sillas < 0 || sillas >1 );
	
}


void pagar( int (&matriz)[1000][5] , int i )
{
	
	if ( matriz[i][2] == 1 )
	{
		
		matriz[i][3] = 1500;
		
	}else
	{
		
		matriz[i][3] = 1000;
		
	}
	
}

int main(int argc, char *argv[]) {
	
	int matriz[1000][5] = {0} , i = 0 , recaudacion = 0;
	char opciones = ' ';
	
	do
	{
		
		cout<<"Opciones\na.\tRegistrar una solicitud.\nb.\tMostrar matriz de solicitudes.\nc.\tMostrar matriz del rubro espectaculo.\nd.\tRecaudacion de la comuna.\nf.\tFinalizar programa.\n";
		cin>>opciones;
		
		switch ( opciones )
		{
			
		case 'a':
			
			cargar( matriz , i );
			pagar( matriz , i );
			sectores( matriz , i );
			i++;
			
			break;
		case 'b':
			
			mostrar( matriz , i );
			
			break;	
		case 'c':
			
			espectaculo( matriz , i );
			
			break;
		case 'd':
			
			recaudacion = total( matriz , i );
			cout<<"El total recaudado en la feria es de "<<recaudacion<<endl;
			
			
			break;
		case 'f':
			
			cout<<"El programa a sido finalizado\n";
			
			break;
		default:
			
			cout<<"Error, la letra ingresada no corresponde a ninguna opcion\n";
			
		}
		
		
	}while ( opciones != 'f' );
	
	
	return 0;
}

