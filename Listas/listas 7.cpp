#include <iostream>
#include <ctime>
using namespace std;
struct nodo
{
	int dato;
	struct nodo *next;
};
int main(int argc, char *argv[]) {
	struct nodo *head=NULL;
	struct nodo *new_nodo=NULL;
	struct nodo *temp=NULL;
	int dato=0,i=0;
	srand(time(NULL));
	cout<<"Cargando datos...\n";
	for(i=0;i<5;i++)
	{
		dato=1+rand()%10;
		cout<<"dato...\n"<<dato<<endl;
		new_nodo=(struct nodo *)malloc(sizeof(struct nodo));
		new_nodo=(struct nodo *)new_nodo;
		new_nodo->dato=dato;
		new_nodo->next=NULL;
		if(head==NULL)
		{
			head=new_nodo;
		}else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=new_nodo;
		}
	}
	cout<<"Mostrando Lista...\n";
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->dato<<endl;
		temp=temp->next;
	}
	cout<<"Ingrese que dato quiere borar...\n";
	cin>>dato;
	if(dato==head->dato)
	{
		temp=head;
		head=head->next;
		free (temp);
	}else{
		struct nodo *prev=NULL;
		struct nodo *current=NULL;
		prev=head;
		current=head->next;
		while(current->dato!=dato && current!=NULL)
		{
			prev=current;
			current=current->next;
		}
		if(current!=NULL)
		{
			temp=current;
			prev->next=current->next;
			free(temp);
		}
	}
	cout<<"Mostrando Lista...\n";
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->dato<<endl;
		temp=temp->next;
	}
	return 0;
}

