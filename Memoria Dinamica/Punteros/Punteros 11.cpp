#include <iostream>
using namespace std;
void funcion_pares(int *num);
void funcion_impares(int *num);
int main(int argc, char *argv[]) {
	int numeros[10]={0}, sumatoria=0,  cont=0;
	float promedio=0;
	int *num=numeros;
	
	for(int i=0;i<10;i++)
	{
		cout<<"Ingrese el valor Nº"<<i+1<<endl;
		cin>>numeros[i];
		system("cls");
	}
	
	for(int i=0;i<10;i++)
	{
		sumatoria+=*(num+i);
		cont++;
	}
	promedio=(float)sumatoria/cont;
	for(int i=0;i<10;i++)
	{
		cout<<"Valor Nº"<<i+1<<endl;
		cout<<*(num+i)<<endl;
	}
	
	cout<<"El promedio de estos numeros es de:"<<promedio<<endl;
	
	return 0;
}


