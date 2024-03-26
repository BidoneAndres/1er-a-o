#include <iostream>
using namespace std;

struct node
{
	char datos;
	struct node *next;
};

int main(int argc, char *argv[]) {
	struct node *head=NULL;
	struct node *temp=NULL;
	struct node *new_node=NULL;
	char dato=' ';
	
	for(int i=0 ; i<10 ; i++)
	{
		cout<<"Ingrese una letra...\n";
		cin>>dato;
		new_node=(struct node*)malloc(sizeof(struct node));
		if(new_node==NULL)
		{
			cout<<"No hay suficiente memoria...\n";
			exit(1);
		}
		new_node->datos=dato;
		new_node->next=NULL;
		if(head==NULL)
		{
			head = new_node;
		}else
		{
			temp=head;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next=new_node;
		}
	}	
	temp=head;
	while(temp != NULL)
	{
		if(temp->datos == 'a' || temp->datos == 'e' || temp->datos == 'i' || temp->datos == 'o' || temp->datos == 'u'){
			cout<<"el dato almacenado es el "<<temp->datos<<endl;
		}
		temp=temp->next;
	}
	free(new_node);
	return 0;
}

