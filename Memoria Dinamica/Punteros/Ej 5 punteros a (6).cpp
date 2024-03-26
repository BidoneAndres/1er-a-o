#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float n1=0, n2=0, result=0;
	float *p_n1=&n1, *p_n2=&n2, *p_result=&result;
	char opcion=' ', opc=' ';
	do
	{
		
		cout<<"Ingrese los valores n1 y n2"<<endl;
		cin>>n1>>n2;
		cout<<"Ingrese la Operacion que desea realizar.\na.\tSumar.\nb.\tRestar.\nc.\tMultiplicar.\nd.\tDividir.\ne.\tElevar una Potencia.\nf.\tRaiz cuadrada.\n";
		cin>>opcion;
		switch ( opcion )
		{
		case 'a':
			*p_result=*p_n1+*p_n2;
			cout<<*p_result<<endl;
			
			
			break;
		case 'b':
			
			
			
			break;
		case 'c':
			
			
			
			break;
		case 'd':
			
		
			
			break;
		case 'e':
			
		
			
			break;
		case 'f':
			
			
			
			break;
			
		}
		
		cout<<"Si desea realizar otra operacion ingrese una letra distinta a la o \n";
		cin>>opc;
		
	}while( opc != 'o' );
	
	return 0;
}

