#include <iostream>
using namespace std;

int cantidad(double (&maraton)[1000][3] , int corredores)
{
	int i = 0 , cant = 0; 
	
	
	for ( i = 0 ; i < corredores ; i++ )
	{
		
		if ( maraton[i][1] == 3 )
		{
			
			cant++;
			
		}
		
	}
	
	return cant;
}

void cargar(double (&maraton)[1000][3] , int corredores , int cant3 , int cant8)
{
	int i = 0 , prueba = 0;
	
	for (i = 0 ; i < corredores ; i++)
	{
		
		cout<<"Ingrese el numero del participante\n";
		cin>>maraton[i][0];
		
		do{
		cout<<"Ingrese la prueba en la cual esta concursando\n1.\t3km\n2.\t8km\n";
		cin>>prueba;
		
		switch ( prueba )
		{
			
		case 1:
			
			maraton[i][1] = 3;
			
			break;
		case 2: 
			
			maraton[i][1] = 8;
			
			break;
		default:
			cout<<"Error, el numero ingresado no corresponde a ninguna pruba.\n";
		}
		
		}while ( prueba < 1 or prueba > 2 );
		
		cout<<"Ingrese el tiempo del concursante\n";
		cin>>maraton[i][2];
		
	}
	
	
}

void mostrar(double (&maraton)[1000][3] , int corredores)
{
	
	int i = 0;
	
	cout<<"Nº\tPrueba\tTiempo\n";
	
	for (i = 0 ; i < corredores ; i++)
	{
		
		cout<<maraton[i][0]<<"\t"<<maraton[i][1]<<"\t"<<maraton[i][2]<<endl;
		
	}
	
}

void gana3(double (&maraton)[1000][3] , double (&ganador3)[1][2] , int corredores)
{
	
	int i = 0;
	
	for (i = 0 ; i < corredores ; i++)
	{
		
		if (maraton[i][2] < ganador3[0][1] && maraton[i][1] == 3)
		{
			
			ganador3[0][1] = maraton[i][2];
			ganador3[0][0] = maraton[i][0];
			
		}
		
	}
	
}

void gana8(double (&maraton)[1000][3] , double (&ganador8)[1][2] , int corredores)
{
	
	int i = 0;
	
	for (i = 0 ; i < corredores ; i++)
	{
		
		if (maraton[i][2] < ganador8[0][1] && maraton[i][1] == 8)
		{
			
			ganador8[0][1] = maraton[i][2];
			ganador8[0][0] = maraton[i][0];
			
		}
		
	}
	
}


int main(int argc, char *argv[]) {
	
	double maraton[1000][3]={0} , ganador3[1][2]={0 , 99999} , ganador8[1][2]={0 , 99999};
	int corredores = 0 , cant3=0 , cant8 = 0;
	char opciones = ' ';
	
	cout<<"Ingrese la cantidad de corredores que estaran concursando en esta maraton...\n";
	cin>>corredores;
	
	cargar( maraton , corredores , cant3 , cant8 );
	gana3( maraton , ganador3 , corredores );
	gana8( maraton , ganador8 , corredores );
	cant3 = cantidad( maraton , corredores );
	
	cant8 = corredores - cant3;
	
	do
	{
		
		cout<<"Menu...\na.\tMostrar el listado completo de participantes.\nb.\tCantidad de participantes en la pruba 3km y la prueba 8km.\nc.\tGanadores con sus respectivos tiempos.\nPara finalizar el programa precione la letra f\n";
		cin>>opciones;
		
		switch ( opciones )
		{
			
		case 'a':
			
			mostrar(maraton , corredores);
			
			break;
		case 'b':
			
			cout<<"La cantidad de corredores en la prueba de los 3km es de "<<cant3<<endl;
			cout<<"La cantidad de corredores en la prueba de los 8km es de "<<cant8<<endl;
			
			break;
		case 'c':
			
			cout<<"El ganador de la prueba de los 3km es....\n";
			
			cout<<"Nº\tTiempo\n";
			cout<<ganador3[0][0]<<"\t"<<ganador3[0][1]<<endl;
			
			cout<<"El ganador de la prueba de los 8km es....\n";
			
			cout<<"Nº\tTiempo\n";
			cout<<ganador8[0][0]<<"\t"<<ganador8[0][1]<<endl;
			
			
			
			break;
		case 'f':
			
			cout<<"El programa a sido finalizado\n";
			
			break;
		default:
			
			cout<<"Error, la letra ingresada no corresponde a ninguna opcion\n";
			
			break;
		}
		
	}while ( opciones != 'f' );
	
	
	
	return 0;
}

