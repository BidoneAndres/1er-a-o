#include <iostream>
using namespace std;
struct nodo
{
	char data;
	struct nodo *next;
};

void push(struct nodo **head);
void print(struct nodo *head);
int main(int argc, char *argv[]) {
	struct nodo *head=NULL;
	int i=0;
	for(i=0;i<10;i++)
	{
		push(&head);
	}
	print(head);
	return 0;
}

void push(struct nodo **head)
{
	char letra=' ';
	struct nodo *temp=NULL;
	struct nodo *new_nodo=NULL;
	new_nodo=(struct nodo *)malloc(sizeof(struct nodo));
	new_nodo=(struct nodo *)new_nodo;
	cout<<"Ingrese la letra que va a ingresar...\n";
	cin>>letra;
	new_nodo->data=letra;
	new_nodo->next=NULL;
	if(*head==NULL)
	{
		*head=new_nodo;
	}else
	{
		temp=*head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_nodo;
	}
	
	
	
}
void print(struct nodo *head)
{
	struct nodo *temp=NULL;
	temp=head;
	cout<<"Las letras ingresadas son...\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<"Las vocales ingresadas son...\n";
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data=='a'||temp->data=='A'||temp->data=='e'||temp->data=='E'||temp->data=='I'||temp->data=='i'||temp->data=='o'||temp->data=='O'||temp->data=='u'||temp->data=='U')
		{
			cout<<temp->data<<endl;
		}
		temp=temp->next;
	}
}
