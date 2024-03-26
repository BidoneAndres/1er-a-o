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
	int dato=0 , cantidad=0;;
	float suma=0,promedio=0;
	
	for(int i=0 ; i<5 ; i++)
	{
		cout<<"Ingrese el numero que desea ingresar a la lista\n";
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
		cout<<"el dato almacenado es el "<<temp->datos<<endl;
		suma+=temp->datos;
		cantidad++;
		temp=temp->next;
	}
	promedio=(float)suma/cantidad;
	cout<<"El promedio de la lista es de "<<promedio<<endl;
	
	free(new_node);
	return 0;
}

