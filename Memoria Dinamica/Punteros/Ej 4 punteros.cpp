#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a = 0 , b = 0 , aux = 0;
	int *valora = NULL;
	int *valorb = NULL;
	
	valora = &a;
	valorb = &b;
	
	cout<<"ingrese los valores de a y b \n";
	cin>>a>>b;
	
	aux = *valora;
	a = *valorb;
	b = aux;
	cout<<"El nuevo valor de a es de "<<a<<"El nuevo valor de b es de "<<b<<endl;
	
	return 0;
}

