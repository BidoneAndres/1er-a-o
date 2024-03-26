#include <iostream>
using namespace std;

void totaldiario(float (&ventas)[999][2] , int numero )
{
	
	int i = 0 , total = 0;
	
	for ( i = 0 ; i < numero ; i++ )
	{
		
		total+=ventas[i][1];
		
	}
	
	cout<<"*******CIERRE DE CAJA*******\nCantidad de facturas realizadas: "<<numero<<"\nRecaudacion diaria: "<<total<<"\n******************************\n";
	
}

void mostrarventas( float  (&ventas)[999][2] , int numero)
{
	
	int i = 0;
	
	cout<<"Nº\tTotal Factura\n";
	
	for ( i = 0 ; i < numero ; i++ )
	{
		
		cout<<ventas[i][0]<<"\t"<<ventas[i][1]<<endl;
		
	}
	
	
}

void inicializar( float  (&factura)[999][4] , int i)
{
	
	int j = 0 , h = 0;
	
	for ( j = 0 ; j < i ; j++ )
	{
		
		for ( h = 0 ; h < 4 ; h++ )
		{
			
			
			factura[j][h] = 0;
			
			
		}
		
	}
	
	
}

void mostrarfactura( float (&factura)[999][4] , int i , float total )
{
	
	int j = 0 , h = 0 , vuelto = 0 , abonar = 0;
	
	cout<<"Codigo\tCantidadPrecio\tSubtotal\n";
	
	for ( j = 0 ; j < i ; j++ )
	{
		
		for ( h = 0 ; h < 4 ; h++ )
		{
			
			if ( h != 0 && h%3 == 0)
			{
				
				cout<<factura[j][h]<<endl;
				
			}else
			{
				
				cout<<factura[j][h]<<"\t";
				
			}
			
		}
		
	}
	
	cout<<"Su total a pagar es de "<<total<<endl;
	
	cout<<"Con cuanto va a abonar??";
	cin>>abonar;
	
	vuelto = abonar - total;
	
	cout<<"Su vuelto es "<<vuelto<<endl;
	
}

float calculartotal( float (&factura)[999][4] , int i )
{
	
	float suma = 0;
	int j = 0;
	
	for ( j = 0 ; j < i ; j++ )
	{
		
		suma+=factura[j][3];
		
	}
	
	return suma;
}

void calcularsubtotal( float (&factura)[999][4] , int cantidad , int i )
{
	
	factura[i][3] = cantidad * factura[i][2];
	
}

float buscarprecio( float (&stock)[7][3] , int articulo , int cantidad )
{
	
	float precio = 0;
	
	precio = stock[articulo - 1][1];
	
	stock[articulo-1][2] = stock[articulo-1][2] - cantidad;
	
	return precio;
}

bool estadisponible( float (&stock)[7][3] , int articulo , int cantidad )
{
	
	bool comprobar = false;
	
	if ( (stock[articulo-1][2] - cantidad) > 0 )
	{
		
		comprobar = true;
		
	}else
	{
		
		comprobar = false;
		cout<<"No hay suficientes articulos\n";
		
	}
	
	return comprobar;
}


int main(int argc, char *argv[]) {
	
	float factura[999][4] = {0} , ventas[999][2] = {0} , total = 0;
	float stock[7][3] = {{ 1 , 10 , 50 } , { 2 , 30 , 30 } , { 3 , 1 , 10 } , { 4 , 100 , 25 } , { 5 , 20 , 0 } , { 6 , 50.5 , 15 } , { 7 , 5.5 , 5}};
	int opciones = 0 , i = 0 , articulo = 0 , cantidad = 0 , numero = 0;
	bool disponibilidad = true;
	
	do
	{
		
		cout<<"Opciones\n1.Registrar una venta\n2.Mostrar ventas del dia.\n";
		cin>>opciones;
		
		switch ( opciones )
		{
			
		case 1:
			
			i = 0;
			
			do
			{
			
			cout<<"Ingrese el codigo del articulo....Precione el 0 si desea dejar de comprar\n";
			cin>>articulo;
			
			cout<<"Ingrese la cantidad que va a llevar\n";
			cin>>cantidad;
			
			factura[i][0] = articulo;
			factura[i][1] = cantidad;
			
			disponibilidad = estadisponible( stock , articulo , cantidad );
			if(disponibilidad && articulo != 0 )
			{
				
				factura[i][2] = buscarprecio( stock , articulo , cantidad );
				calcularsubtotal( factura , cantidad , i );
				i++;
			}
			
			}while ( articulo != 0 );
			
			total = calculartotal ( factura , i );
			ventas[numero][1] = total;
			ventas[numero][0] = numero + 1;
			mostrarfactura( factura , i , total );
			
			inicializar( factura , i );
			
			numero++;
			
			break;
		case 2:
			
			mostrarventas( ventas , numero );
			
			break;
			
		}
		
	}while ( opciones != 0 );
	
	totaldiario( ventas , numero );
	
	return 0;
}

