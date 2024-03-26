#include <iostream>
using namespace std;

struct nodo
{
	int dato;
	struct nodo *next;
};

int main(int argc, char *argv[]) {
	
	struct nodo *stackptr=NULL;
	
	return 0;
}

int menu()
{
	int opcion=0;
	
	cout<<"Opciones...\n";
	cout<<"1. Agregar nodo.\n2.Borrar el ultimo nodo.\n3. Imprimir cola.\n";
	cout<<"4. Tamaño de la pila.\n5. Mostrar el ultimo valor de la pila.\n";
	cin>>opcion;
	return (opcion);
}
void push(struct nodo **stackptr)
{
	struct nodo *temp=NULL;
	int numero=0;
	cout<<"Ingrese el numero que desea agregar a la pila...\n";
	cin>>numero;
	temp=(struct nodo *)malloc(sizeof(struct nodo));
	if(temp==NULL)
	{
		cout<<"No hay suficiente memoria.\n";
		exit(0);
	}
	temp->dato=numero;
	temp->next=*(stackptr);
	*(stackptr)=temp;
}

void pop(struct nodo **stackptr)
{
	struct nodo *temp=NULL;
	
	temp=*(stackptr);
	**(stackptr)=*(*stackptr)->next;
	free(temp);
}
void print(struct nodo **stackptr)
{
	struct nodo *temp=NULL;
	temp=*(stackptr);
	cout<<"Imprimiendo la pila...\n";
	while(temp!=NULL)
	{
		cout<<temp->dato<<endl;
		temp=temp->next;
	}
}
int tamano(struct nodo **stackptr)
{
	int cantidad=0;
	struct nodo *temp=NULL;
	temp=*(stackptr);
	while(temp!=NULL)
	{
		cantidad+=1;
		temp=temp->next;
	}
	return(cantidad);
}
