#include <iostream>
using namespace std;

struct Cancion
{
	string nombre;
	string titulo;
	int duracion;
	int tamano;
};


int main(int argc, char *argv[]) {
	
	Cancion p;
	
	cout<<"Ingrese el nombre del artista....\n";
	cin>>p.nombre;
	cout<<"Ingrese el nombre de la cancion...\n";
	cin>>p.titulo;
	cout<<"Ingrese la duracion de la cancion...\n";
	cin>>p.duracion;
	cout<<"ingrese el tamano del archivo...\n";
	cin>>p.tamano;
	
	cout<<"Nombre del artista "<<p.nombre<<endl;
	cout<<"El titulo de la cancion es "<<p.titulo<<endl;
	cout<<"La duracion de la cancion es de "<<p.duracion<<endl;
	cout<<"El tamano del archivo es de "<<p.tamano<<endl;
	
	return 0;
}

