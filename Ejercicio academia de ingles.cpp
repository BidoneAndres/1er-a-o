#include <iostream>
using namespace std;

void mostrar(float (&alumnos)[1000][2] , int alum)
{
	int i=0;
	
	cout<<"Nº\tNota\n";
	
	for ( i = 0 ; i < alum ; i++)
	{
		
		cout<<alumnos[i][0]<<"\t"<<alumnos[i][1]<<endl;
		
	}
	
}

void ordenar(float (&alumnos)[1000][2] , int alum)
{
	int i = 0 , j = 0;
	float aux = 0 , aux1=0;
	
	for (i = 0 ; i < alum ; i++)
	{
		for (j = 0 ; j < alum-1 ; j++)
		{
			if ( alumnos[j][1] > alumnos[j+1][1])
			{
				
				aux = alumnos[j][0];
				aux1 = alumnos[j][1];
				
				alumnos[j][0] = alumnos[j+1][0];
				alumnos[j][1] = alumnos[j+1][1];
				
				alumnos[j+1][0] = aux;
				alumnos[j+1][1] = aux1;
				
			}
		}
	}
	
}

void cargar(float (&alumnos)[1000][2] , int alum , int canta , int cantd)
{		
	
	int i=0;
	
	for ( i = 0 ; i < alum ; i++)
	{
		
		alumnos[i][0] = i + 1;
		
		cout<<"ingrese la nota del alumno Nº "<<alumnos[i][0]<<endl;
		cin>>alumnos[i][1];
		
		if ( alumnos[i][1] < 7)
		{
			
			cout<<"El alumno a sido desaprobado\n";
			cantd++;
			
		}else
		{
			
			cout<<"El alumno a sido aprobado\n";
			canta++;
			
		}
	}
	
}



int main(int argc, char *argv[]) {
	
	float alumnos[1000][2];
	int opciones=0 , alum=0 , canta=0 , cantd=0;
	
	cout<<"Ingrese la cantidad de alumnos que realizaron el examen de ingreso\n";
	cin>>alum;
	
	cargar(alumnos , alum , canta , cantd);
	ordenar(alumnos , alum);
	
	do{
	cout<<"***********Opciones***********\n";
	cout<<"1.\tBuscar el estudiante con mejor calificación.\n2.\tBuscar el estudiante con peor calificación.\n3.\tUn listado ordenado por orden de mérito de mayor a menor.\n4.\tCantidad de estudiantes aprobados con 7 o más, y cantidad de estudiantes desaprobados.\n";
	cin>>opciones;
	
	switch (opciones)
	{
	case 1:
		cout<<"Nº\tNota\n";
		
		cout<<alumnos[alum-1][0]<<"\t"<<alumnos[alum-1][1]<<endl;
		
		break;
	case 2:
		cout<<"Nº\tNota\n";
		
		cout<<alumnos[0][0]<<"\t"<<alumnos[0][1]<<endl;
		
		break;
	case 3:
		
		mostrar(alumnos , alum);
		
		break;
	case 4:
		
		cout<<"La cantidad de alumnos aprobados es de "<<canta<<" y la cantidad de desaprobados "<<cantd<<endl;
		
		break;
	case 0:
		
		cout<<"Usted a finalizado el programa\n";
		
		break;
	}
	}while(opciones != 0);
	
	
	return 0;
}

