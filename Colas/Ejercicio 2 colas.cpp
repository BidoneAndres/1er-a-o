#include <iostream>
#include <ctime>
using namespace std;
struct nodo
{
	int data;
	struct nodo *next;
};
void push(struct nodo **head,struct nodo **back);
void print(struct nodo *head);
void pares(struct nodo *head);
int main(int argc, char *argv[]) {
	struct nodo *head=NULL;
	struct nodo *back=NULL;
	int i=0;
	srand(time(NULL));
	for(i=0;i<5;i++)
	{
		push(&head,&back);
	}
	print(head);
	pares(head);

	return 0;
}
void push(struct nodo **front,struct nodo **back)
{
	struct nodo *new_nodo=NULL;
	int numero=0;
	new_nodo=(struct nodo *)malloc(sizeof(struct nodo));
	new_nodo=(struct nodo *)new_nodo;
	cout<<"Ingresando los datos...\n";
	numero=1+rand()%10;
	cout<<numero<<endl;
	new_nodo->data=numero;
	new_nodo->next=NULL;
	if(*front==NULL)
	{
		*back=new_nodo;
		*front=*back;
	}else
	{
		(*back)->next=new_nodo;
		*back=new_nodo;
	}
}
void print(struct nodo *head)
{
	struct nodo *temp=NULL;
	temp=head;
	cout<<"Los numeros ingresados son...\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
void pares(struct nodo *head)
{
	struct nodo *temp=NULL;
	temp=head;
	cout<<"Los numero pares son\n";
	while(temp!=NULL)
	{
		if(temp->data%2==0)
		{
			cout<<temp->data<<endl;
		}
		temp=temp->next;
	}
}
