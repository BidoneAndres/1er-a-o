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

void push(struct nodo **stackptr)
{
	struct nodo *new_nodo=NULL;
	int data=0;
	new_nodo=(struct nodo *)malloc(sizeof(struct nodo));
	if(new_nodo==NULL)
	{
		cout<<"No hay suficiente memoria...\n";
		exit(1);
	}
	new_nodo->dato=data;
	new_nodo->next=*(stackptr);
	*(stackptr)=new_nodo;
	
}

void print(struct nodo *stackptr)
{
	struct nodo *temp=NULL;
	
	cout<<"Imprimiendo la pila...\n";
	temp=stackptr;
	while(temp!=NULL)
	{
		cout<<temp->dato<<endl;
		temp=temp->next;
	}
	
}
void pop(struct nodo *stackptr)
{
	struct nodo *temp=NULL;
	cout<<"Borrando el primer nodo de la lista....\n";
	temp=stackptr;
	stackptr=stackptr->next;
	free(temp);
}
