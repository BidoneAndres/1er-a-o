#include <iostream>
#include <ctime>
using namespace std;

struct nodo
{
	int dato;
	struct nodo *next;
};

int menu();
bool comprobacion(struct nodo *, int);
void push( struct nodo ** , struct nodo ** , int);
void pop( struct nodo ** );
void print( struct nodo * );
	
int main(int argc, char *argv[]) {
	
	struct nodo *front=NULL;
	struct nodo *back=NULL;
	int opciones=0, value=0 , i=0;
	bool comprobar=false;
	
	for(i=0;i<5;i++)
	{
		value=rand()%10+1;
		push(&front,&back,value);
	}
	
	srand(time(NULL));
	do
	{
		opciones=menu();
		switch(opciones)
		{
		case 1:
			cout<<"Ingrese el dato que quiere cargar...\n";
			do
			{
				cin>>value;
				comprobar=comprobacion(front,value);
				if(comprobar==false)
				{
					push(&front,&back,value);
				}else
				{
					cout<<"El numero ingresado ya se encuentra en la lista...\n";
				}
			}while(comprobar==false);
			break;
		case 2:
			pop(&front);
			break;
		case 3:
			print(front);
			break;
		}
		
	}while(opciones >= 0 && opciones <= 3);
	
	return 0;
}

int menu()
{
	int opcion=0;
	
	do
	{
		cout<<"Opciones...\n";
		cout<<"1. Agregar nuevo nodo.\n2. Borrar el primer nodo de la cola.\n3.Imprimir cola.\nCon el numero 0 se finalizara el programa.\n";
		cin>>opcion;
		
		if( opcion == 0)
		{
			exit(1);
		}else
		{
			return (opcion);
		}
	}while(opcion>3 && opcion<1);
	
}
void push( struct nodo **front , struct nodo **back , int value )
{
	struct nodo *temp=NULL;
	
	temp=(struct nodo *)malloc(sizeof (struct nodo));
	temp=(struct nodo *)temp;
	if(temp == NULL)
	{
		cout<<"No hay suficiente memoria....\n";
		exit (1);
	}
	temp->dato=value;
	temp->next=NULL;
	if((*back)==NULL && (*front)==NULL){
		*back=temp;
		*front=*back;
	}else{
		(*back)->next=temp;
		*back=temp;
	}
}
void pop( struct nodo **front )
{
	struct nodo *temp=NULL;
	
	temp=*front;
	*front=(*front)->next;
	
	free (temp);
	
}

void print( struct nodo *front )
{
	struct nodo *temp=NULL;
	
	temp = front;
	if(front==NULL)
	{
		cout<<"La lista esta vacia\n";
	}
	cout<<"Lista...\n";
	while ( temp != NULL)
	{
		cout<<temp->dato<<endl;
		temp=temp->next;
	}
}

bool comprobacion(struct nodo *front , int value)
{
	bool repetidos=false;
	struct nodo *temp=NULL;
	
	temp=front;
	while(temp != NULL)
	{
		if(temp->dato==value)
		{
			repetidos=true;
		}
		temp=temp->next;
	}
	return (repetidos);
}
