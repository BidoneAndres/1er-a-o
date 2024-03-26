#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int i = 0 , opciones = 0 , datos = 0 , agregar = 0;
	int *p=NULL;
	
	do
	{
		
		cout<<"Opciones...\n1.\tReserva de memoria e intreduccion de datos\n2.\tAgregar memoria.\n3.\tMostrar datos.\nPrecione el 0 si quiere finalizar el programa.\n";
		cin>>opciones;
		
		switch(opciones)
		{
		case 1:
			cout<<"ingrese la cantidad de datos que desea reservar\n";
			cin>>datos;
			p=(int *)malloc(datos*sizeof(int));
			cout<<"ingrese sus datos...\n";
			for(i=0 ; i < datos ; i++)
			{
				cin>>*(p+i);
			}
			break;
		case 2:
			cout<<"Ingrese la cantidad de datos que quiere agregar.\n";
			cin>>agregar;
			p=(int *)realloc(p,(datos+agregar)*sizeof(int));
			cout<<"ingrese los datos agregados.\n";
			for(i=0 ; i<agregar ; i++)
			{
				cin>>*(p+datos+i);
			}
			datos+=agregar;
			break;
		case 3:
			cout<<"De forma normal...\n";
			for(i=0 ; i < datos ; i++)
			{
				cout<<*(p+i)<<endl;
			}
			cout<<"De forma inversa.\n";
			for(i=datos-1 ; i >= 0 ; i--)
			{
				cout<<*(p+i)<<endl;
			}
			break;
		case 0:
			cout<<"Usted a finalizado el programa.\n";
			break;
		default:
			cout<<"ERROR, el numero ingresado no corresponde a ninguna operacion.\n";
			break;
		}
		
		
	}while(opciones!=0);
	
	free(p);
	
	return 0;
}

