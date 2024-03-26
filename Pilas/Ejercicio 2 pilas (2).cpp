#include <iostream>
#include <ctime>

using namespace std;

struct nodo 
{
	int dato;
	struct nodo *next;
};


void cargar(struct nodo **);
void mostrar(struct nodo *);
void Pares(struct nodo *);

int main(int argc, char *argv[]) {
	
	struct nodo *stackptr=NULL;
	int i=0;
	srand(time(NULL));
	cout<<"Cargando los valores...\n";
	for(i=0;i<5;i++)
	{
		cargar(&stackptr);
	}
	mostrar (stackptr);
	Pares (stackptr);
	
	return 0;
}

void cargar(struct nodo **stackptr)
{
	struct nodo *temp=NULL;
	
	temp=(struct nodo *)malloc(sizeof(struct nodo));
	temp=(struct nodo *)temp;
	
	temp->dato=1+rand()%10;
	temp->next=*(stackptr);
	*(stackptr)=temp;
	
	cout<<temp->dato<<endl;
}

void mostrar(struct nodo *stackptr)
{
	struct nodo *temp=NULL;
	
	temp = stackptr;
	
	cout<<"Mostrando la lista...\n";
	while(temp != NULL)
	{
		cout<<temp->dato<<endl;
		temp=temp->next;
	}
}
void Pares(struct nodo *stackptr)
{
	struct nodo *temp=NULL;
	
	temp = stackptr;
	
	cout<<"Mostrando los numeros Pares...\n";
	while(temp != NULL)
	{
		if(temp->dato%2 == 0)
		{
			cout<<temp->dato<<endl;
		}
		temp=temp->next;
	}
}
