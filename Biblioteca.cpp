#include <iostream>
#include <ctime>
using namespace std;

void solicitado(int (&arreglo)[10][5])
{
	
	int i = 0 , solicitado = 0;;
	
	for ( i = 0 ; i < 10 ; i++ )
	{
		
		if ( arreglo[i][4] > solicitado)
		{
			
			solicitado = i;
			
		}
		
	}
	
	cout<<"El libro mas solicitado es el libro con el codigo "<<solicitado + 1<<" con una cantidad de "<<arreglo[solicitado][4]<<endl;
	
}

void prestar(int (&arreglo)[10][5])
{
	
	int i = 0 , libro = 0 , cantidad = 0 ;	
	
	
	cout<<"Codigo";
	
	for ( i = 0 ; i < 10 ; i++ )
	{
		
		if ( arreglo[i][3] != 0)
		{
			
			cout<<arreglo[i][0]<<endl;
			
		}
		
	}
	
	cout<<"Para finalizar con la compra ingrese el 0 en prestar libros\n";
	
	do 
	{
		
		cout<<"Ingrese el codigo del libro que desea adquirir\n";
		cin>>libro;
		
		cout<<"Ingrese la cantidad de copias\n";
		cin>>cantidad;
		
		arreglo[libro-1][4] = arreglo[libro-1][4] + cantidad;
		
		if( cantidad > arreglo[libro-1][3] )
		{
			
			cout<<"No hay suficientes libros con el codigo "<<libro<<endl;
			
		}else 
		{
			
			arreglo[libro-1][3] = arreglo[libro-1][3] - cantidad;
			arreglo[libro-1][2] = arreglo[libro-1][2] + cantidad;
			
		}
		
	}while ( libro != 0 );
	
}

void mostrar(int (&arreglo)[10][5])
{
	
	int i = 0 , j = 0;
	
	cout<<"Codigo\tCantidad t\tCantidad p\tCantidad d\n";
	
	for ( i = 0 ; i < 10 ; i++ )
	{
		
		for ( j = 0 ; j < 4 ; j++ )
		{
			
			if ( j % 3 == 0 && j != 0 )
			{
				
				cout<<arreglo[i][j]<<endl;
				
			}else
			{
				
				cout<<arreglo[i][j]<<"\t";
				
			}
			
		}
		
	}
	
}

void cargar(int (&arreglo)[10][5])
{
	
	int i = 0; 
	
	srand(time(NULL));
	
	for ( i = 0 ; i <10 ; i++ )
	{
		
		arreglo[i][0] = i+1;
		arreglo[i][1] = 5 + rand()%10;
		arreglo[i][2] = 0;
		arreglo[i][3] = arreglo[i][1];
		
	}
	
}

int main(int argc, char *argv[]) {
	
	int arreglo[10][5] = {0};
	int opciones = 0;
	
	cargar( arreglo );
	
	do
	{
	
	cout<<"Opciones\n1.\tMostrar datos registrados en el arreglo\n2.\tPrestar libros\n3.\tMostrar libro mas solicitado\n0.\tFinalizar programa\n";
	cin>>opciones;
	
	switch ( opciones )
	{
		
	case 1:
		
		mostrar( arreglo );
		
		break;
	case 2:
		
		prestar( arreglo );
		
		break;
	case 3:
		
		solicitado( arreglo );
		
		break;
	case 0:
		
		cout<<"Se a finalizado el programa\n";
		
		break;
	default:
		
		cout<<"La opcion ingresada no es correcta\n";
		 break;
	}
	
	}while( opciones != 0 );
	
	
	return 0;
}

