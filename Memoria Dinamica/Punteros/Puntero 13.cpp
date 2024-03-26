#include <iostream>
#include <ctime>
using namespace std;

void max(int *p);
void min(int *p);
int suma(int *p);

int main(int argc, char *argv[]) {
	int arreglo[5];
	int *p=arreglo;
	
	srand(time(NULL));
	
	for(int i=0;i<5;i++)
	{
		arreglo[i]=rand()%100;
	}
	max(p);
	min(p);
	cout<<"La suma de todos los terminos calculada es de: "<<suma(p)<<endl;
	
	
	return 0;
}


void max(int *p)
{
	int mayor=*(p);
	int i=0;
	
	for(i=0;i<5;i++)
	{
		if(*(p+i)>mayor)
		{
			mayor=*(p+i);
		}
	}
	
	
	cout<<"El mayor valor ingresado es de: "<<mayor<<endl;
}

void min(int *p)
{
	int menor=*(p);
	int i=0;
	
	for(i=0;i<5;i++)
	{
		if(*(p+i)<menor)
		{
			menor=*(p+i);
		}
	}
	
	cout<<"El menot valor ingresado es de: "<<menor<<endl;
}
int suma(int *p)
{
	int suma=0;
	
	int i=0;
	
	for(i=0;i<5;i++)
	{
		suma+=*(p+i);
	}
	
	
	return (suma);
}

