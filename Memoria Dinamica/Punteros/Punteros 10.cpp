#include <iostream>
using namespace std;
void funcion_pares(int *num);
void funcion_impares(int *num);
int main(int argc, char *argv[]) {
	int numeros[10]={0};
	int *num=numeros;
	
	for(int i=0;i<10;i++)
	{
		cout<<"Ingrese el valor Nº"<<i+1<<endl;
		cin>>numeros[i];
		system("cls");
	}
	
	funcion_pares(num);

	funcion_impares(num);
	
	return 0;
}
void funcion_pares(int *num)
{
	int i=0;
	
	cout<<"Los valores en las pociciones pares son:\n";
	
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			cout<<*(num+i)<<endl;
		}
	}
	
	
}
void funcion_impares(int *num)
{
	int i=0;
	
	cout<<"Los valores en las pociciones impares son:\n";
	
	for(i=0;i<10;i++)
	{
		if(i%2!=0)
		{
			cout<<*(num+i)<<endl;
		}
	}
}

