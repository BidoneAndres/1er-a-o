#include <iostream>
#include <ctime>
using namespace std;
struct nodo
{
	int dato;
	struct nodo *next
		;
};
void push(struct nodo **stack_pointer);
void print(struct nodo *stack_pointer);
void pares(struct nodo *stack_pointer);
int main(int argc, char *argv[]) {
	
	struct nodo *stack_pointer=NULL;
	int i=0;
	for (i=0;i<5;i++)
	{
		push(&stack_pointer);
	}
	print(stack_pointer);
	pares(stack_pointer);
	return 0;
}

void push(struct nodo **stack_pointer)
{
	struct nodo *temp=NULL;
	int numero=0;
	temp=(struct nodo *)malloc(sizeof(struct nodo));
	temp=(struct nodo *)temp;
	cout<<"Agregando valores...\n";
	numero=1+rand()%10;
	cout<<numero<<endl;
	temp->dato=numero;
	temp->next=*(stack_pointer);
	*stack_pointer=temp;
}
void print(struct nodo *stack_pointer)
{
	struct nodo *temp=NULL;
	temp=stack_pointer;
	cout<<"Valores de la pila...\n";
	while(temp!=NULL)
	{
		cout<<temp->dato<<endl;
		temp=temp->next;
	}
}
void pares(struct nodo *stack_pointer)
{
	struct nodo *temp=NULL;
	temp=stack_pointer;
	cout<<"Valores pares de la pila...\n";
	while(temp!=NULL)
	{
		if(temp->dato%2==0)
		{
			cout<<temp->dato<<endl;
		}
		temp=temp->next;
	}
}
