#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char valores = 0;
	int memoria = 0 , ii = 0;
	char *p = &valores;
	
	cout<<"Ingrese la cantidad de datos que desea reservar...\n";
	cin>>memoria;
	
	p=( char * )malloc( memoria*sizeof(char) );
	
	cout<<"ingrese "<<memoria<<" valores...\n";
	
	for ( ii = 0 ; ii < memoria ; ii++ )
	{
		
		cin>>*(p+ii);
		
	}
	
	cout<<"Los valores son...\n";
	
	for ( ii = 0 ; ii < memoria ; ii++ )
	{
		
		cout<<*(p+ii)<<endl;
		
	}
	free(p);	
	p=NULL;
	return 0;
}

