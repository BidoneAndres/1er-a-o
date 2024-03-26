#include <iostream>
using namespace std;

struct nodo
{
	int numero;
	struct nodo *next;
};

int menu();
void push( struct nodo **front , struct nodo **back );
void pop( struct nodo **front , struct nodo **back );
void print( struct nodo **front , struct nodo **back );
	

int main(int argc, char *argv[]) {
	
	struct nodo *front=NULL;
	struct nodo *back=NULL;
	int i=0 , opc=0;
	
	do
	{
		opc=menu();
		switch(opc)
		{
		case 1:
			push( &front , &back );
			break;
		case 2:
			pop( &front , &back );
			break;
		case 3:
			print( &front , &back );
			break;
		case 4:
			break;
		case 0:
			break;
		}
	}while(opc!=0);	
	
	return 0;
}


void push( struct nodo **front , struct nodo **back )
{
	struct nodo *new_nodo=NULL;
	int dato = 0;
	
	cout<<"Ingrese que valor quiere agregar...\n";
	cin>>dato;
	new_nodo=(struct nodo *)malloc(sizeof(struct nodo));
	new_nodo=(struct nodo *)new_nodo;
	if(new_nodo==NULL)
	{
		cout<<"No hay memoria suficiente...\n";
		exit (0);
	}
	new_nodo->next=NULL;
	new_nodo->numero=dato;
	
	if(*back == NULL)
	{
		*back = new_nodo;
		*front = *back;
	}else
	{
		(*back)->next = new_nodo;
		*back= new_nodo;
	}	
}

void pop( struct nodo **front , struct nodo **back )
{
	struct nodo *temp=NULL;
	
	if( *back==NULL && *front==NULL)
	{
		cout<<"La lista esta vacia...\n";
	}else
	{
		temp=*front;
		*front=(*front)->next;
		if(*back == temp)
		{
			*back = (*back)->next;
		}
		free(temp);
		cout<<"El primer nodo de la lista, a sido borrado...\n";
	}
}
void print( struct nodo **front , struct nodo **back )
{
	struct nodo *temp=NULL;
	
	if(back==NULL && front==NULL)
	{
		cout<<"La lista esta vacia...\n";
	}
	
	temp=*front;
	
	cout<<"Lista....\n";
	while(temp!=NULL)
	{
		cout<<temp->numero<<endl;
		temp=temp->next;
	}
}

int menu( )
{
	int opciones=0;
	
	cout<<"Opciones...\n";
	cout<<"Agregar un nodo a la cola...\nBorrar el primer nodo...\nImprimir la cola...\nSuma de los valores de la cola...\n";
	cin>>opciones;
	
	while(opciones<0 || opciones>4)
	{
		cout<<"El numero ingresado no corresponde a ninguna opcion...";
		cin>>opciones;
	}
	
	return (opciones);
}
