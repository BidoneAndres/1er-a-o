#include <iostream>
using namespace std;


struct veiculo
{
	int patente;
	string marca;
	string color;
	int cantidad_ejes;
	int precio;
	int direccion;
	struct veiculo *next;
};

int main(int argc, char *argv[]) {
	
	struct veiculo *front=NULL;
	struct veiculo *back=NULL;
	int opc=0;
	
	return 0;
}

int menu()
{
	int opciones=0;
	cout<<"OPCIONES\n";
	cout<<"Agregar un vehiculo a la cola\nBorrar el primer nodo de la cola.\nMostrar todos los vehiculos. \nMostrar los vehiculos por dirección\nMostrar los vehiculos por ejes.\n";
	cin>>opciones;
	
	return (opciones);
}

void push(struct veiculo **front , struct veiculo **back)
{
	int dato=0 , direc=0, ejes, patente=0;
	string mar=" " , color=" ";
	
	
	struct veiculo *temp=NULL;
	
	temp=(struct veiculo *)malloc(sizeof(struct veiculo));
	temp=(struct veiculo *)temp;
	if(temp==NULL)
	{
		cout<<"No hay suficiente memoria...\n";
		exit (1);
	}	
	cout<<"Ingrese los datos del auto...\nPatente...\n";
	cin>>temp->patente;
	cout<<"Marca...\n";
	cin>>temp->marca;
	cout<<"color\n";
	cin>>temp->color;
	cout<<"Cantidad de ejes\n";
	do
	{
		cin>>temp->cantidad_ejes;
	}while(temp->cantidad_ejes!=);
	do
	{
		cout<<"Diresccion\n1.De norte a sur\n2.De sur a norte.\n";
		cin>>temp->direccion;
	}while(temp->direccion != 0 && temp->direccion != 1);
	
	temp->next=NULL;
	 
	if(*back==NULL && *front==NULL)
	{
		*back=temp;
		*front=*back;
	}else
	{
		(*back)->next=temp;
		*back=temp;
	}
}
