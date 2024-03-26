#include <iostream>
#include <ctime>
using namespace std;
struct node
{
	int datos;
	struct node *next;
};
int main(int argc, char *argv[]) {
	
	struct node *head=NULL;
	struct node *temp=NULL;
	struct node *new_node=NULL;
	int dato=0;
	srand(time(NULL));
	for(int i=0 ; i<5 ; i++)
	{
		dato=rand()%10;
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
	cout<<"Mostrando la lista...\n";
	while(temp != NULL)
	{
		cout<<"el dato almacenado es el "<<temp->datos<<endl;
		temp=temp->next;
	}
	cout<<"Mostrando los multiplos de 5\n";
	temp=head;
	while(temp != NULL)
	{
		if(temp->datos%5==0)
		{
			cout<<"el dato almacenado es el "<<temp->datos<<endl;
		}
		temp=temp->next;
	}
	free(new_node);
	return 0;
}


