#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a = 5;
	int *puntero = &a;
	
	cout<<"Direccion de memoria de la variable "<<&a<<endl;
	cout<<"Valor que almacena la variable "<<a<<endl;
	cout<<"Valor del puntero "<<puntero<<endl;
	cout<<"Valor al que apunta el puntero "<<*puntero<<endl;
	
	return 0;
}

