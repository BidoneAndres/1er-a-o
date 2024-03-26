#include <iostream>
using namespace std;

void mayores( float *ptr , float promedio , int *ptro );
void recaudado( float * , int * );
float Promedio( float *ptr , int *ptro );
void menores( float *ptr , float promedio , int *ptro );
	
	

int main(int argc, char *argv[]) {
	
	float vector[10]={0} , promedio = 0;
	int  i = 0 , tamano = 0;
	char opcion = ' ';
	float *ptr = vector; 
	int *ptro = &tamano;
	
	cout<<"Ingrese la cantidad de valores que desea ingresar...\n";
	cin>>tamano;
	
	cout<<"Ingrese "<<tamano<<" valores\n";
	
	for ( i = 0 ; i < tamano ; i++ )
	{
		
		cin>>vector[i];
		
	}
	
	promedio = Promedio( ptr , ptro );
	
	do
	{
		
		cout<<"Ingrese que desea ver....\na.\tCantidad de saldos cargados.\nb.\tPromedio.\nc.\tCantidad de saldos menores al promedio.\nd.\tCantidad de saldos mayores al promedio.\ne.\tCuanto fue lo recaudado en el mes.\nIngresando f se termina el programa....";
		cin>>opcion;
		
		switch ( opcion )
		{
		case 'a':
			
			cout<<"La cantidad de saldos cargados es de "<<tamano<<endl;
			
			break;
		case 'b':
			cout<<"El promedio es de "<<promedio<<endl;
			break;
		case 'c':
			
			menores(ptr , promedio , ptro);
			
			break;
		case 'd':
			
			mayores(ptr , promedio , ptro);
			
			break;
		case 'e':
			
			recaudado(ptr , ptro);
			
			break;
		case 'f':
			
			cout<<"Usted a finalizado el programa\n";
			
			break;
			
		default:
			cout<<"ERROR...La letra ingresada es incorrecta\n";
			break;
		}
		
		opcion = 'f';
		
	}while (opcion != 'f' && opcion != 'F');
	
	
	return 0;
}




void recaudado( float *ptr , int *ptro )
{
	
	int i = 0;
	float suma = 0; 
	
	for ( i = 0 ; i < 10 ; i++ )
	{
		
		suma+=*(ptr+i);
		
	}
	
	cout<<"El total recaudado es de "<<suma<<endl;
}

void menores( float *ptr , float promedio , int *ptro )
{
	int i = 0 , cantidad = 0;
	
	for ( i = 0 ; i < *ptro ; i++ )
	{
		
		if ( *(ptr+i) < promedio )
		{
			
			cantidad++;
			
		}
		
	}
	
	cout<<"La cantidad de valores menores al promedio es de "<<cantidad<<endl;
}
void mayores( float *ptr , float promedio , int *ptro )
{
	int i = 0 , cantidad = 0;
	
	for ( i = 0 ; i < *ptro ; i++ )
	{
		
		if ( *(ptr+i) > promedio )
		{
			
			cantidad++;
			
		}
		
	}
	
	cout<<"La cantidad de valores mayores al promedio es de "<<cantidad<<endl;
}
float Promedio( float *ptr , int *ptro )
{
	
	int i = 0;
	float suma = 0 , promedio = 0; 
	
	for ( i = 0 ; i < *ptro ; i++ )
	{
		
		suma+=*(ptr+i);
		
	}
	
	promedio = (float)suma/(*ptro);
	
	return (promedio);
}
