#include <iostream>
using namespace std;
struct direc
{
	string direccion;
	long fecha;
};
struct datos
{
	string nombre;
	string apellido;
	long telefono;
	struct direc m;
};
int main(int argc, char *argv[]) {
	struct datos dat[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"Ingrese los datos de la persona Nº"<<i+1<<endl;
		cout<<"ingrese su nombre...\n";
		cin>>dat[i].nombre;
		cout<<"ingrese su apellido...\n";
		cin>>dat[i].apellido;
		cout<<"ingrese su telefono...\n";
		cin>>dat[i].telefono;
		cout<<"ingrese su fecha de nacimiento...\n";
		cin>>dat[i].m.fecha;
		cout<<"ingrese su direccion...\n";
		cin>>dat[i].m.direccion;
	}
	system("cls");
	for(int i=0;i<5;i++)
	{
		cout<<"Mostrando la lista de los datos\n";
		cout<<"************************************\n";
		
		cout<<"Mostrando datos...\n";
		cout<<"Nombre...\n";
		cout<<dat[i].nombre<<endl;
		cout<<"Apellido...\n";
		cout<<dat[i].apellido<<endl;
		cout<<"telefono...\n";
		cout<<dat[i].telefono<<endl;
		cout<<"fecha de nacimiento...\n";
		cout<<dat[i].m.fecha<<endl;
		cout<<"Direccion...\n";
		cout<<dat[i].m.direccion<<endl;
		cout<<"************************************\n";
	}
	return 0;
}

