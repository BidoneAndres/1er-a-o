#include <iostream>
using namespace std;
struct nodo
{
	int data;
	struct nodo *next;
};
void push(struct nodo **head , struct nodo **back);
void pop(struct nodo **head);
void print(struct nodo *head);
void primer_nodo(struct nodo *head);
int contar(struct nodo *head);

int main(int argc, char *argv[]) {
	struct nodo *head=NULL;
	struct nodo *back=NULL;
	int opciones=0;
	int i=0, contador=0;;
	char des=' '; 
	do
	{
		
		cout<<"Menu...\n";
		cout<<"1. Agregar un nodo a la cola.\n2. Borrar el primer nodo de la cola.\n";
		cout<<"3. Imprimir cola.\n 4. Cantidad de nodos de la cola.\n5. Valor del frente de la cola.\n";
		cin>>opciones;
		
		switch(opciones)
		{
		case 1:
			
			for(i=0;i<5;i++)
			{
				push(&head,&back);
			}
			system("pause");
			system("cls");
			break;
		case 2:
			pop(&head);
			system("pause");
			system("cls");
			break;
		case 3:
			print(head);
			system("pause");
			system("cls");
			break;
		case 4:
			contador= contar(head);
			cout<<"La cantidad de nodos es de: "<<contador<<endl;
			system("pause");
			system("cls");
			break;
		case 5:
			primer_nodo(head);
			system("pause");
			system("cls");
			break;
		default:
			cout<<"La opcion ingresada no existe...\n";
			break;
		}
		cout<<"¿Desea continuar?\tS/N \n";
		cin>>des;
		system("cls");
		
	}while(des=='S' || des=='s');
	
	
	return 0;
}

void push(struct nodo **head , struct nodo **back)
{
	struct nodo *new_nodo=NULL;
	int dato=0;
	
	new_nodo=(struct nodo *)malloc(sizeof(struct nodo));
	if(new_nodo==NULL)
	{
		cout<<"No hay suficiente memoria...\n";
	}
	cout<<"Ingrese el dato que desea agregar...\n";
	cin>>dato;
	new_nodo->data=dato;
	new_nodo->next=NULL;
	if(*head==NULL && *back==NULL)
	{
		*back=new_nodo;
		*head=*back;
	}else
	{
		(*back)->next=new_nodo;
		*back=new_nodo;
	}
	
	
}
void pop(struct nodo **head)
{
	struct nodo *temp=NULL;
	if(head==NULL)
	{
		cout<<"La lista esta vacia...\n";
	}else
	{
		temp=*head;
		
		*head=(*head)->next;
		free(temp);
	}
}
void print(struct nodo *head)
{
	struct nodo *temp=NULL;
	temp=head;
	if(temp==NULL)
	{
		cout<<"La lista esta vacia...\n";
	}else
	{
		cout<<"Imprimiendo lista...\n";
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
	
	
	
}
void primer_nodo(struct nodo *head)
{
	if(head==NULL)
	{
		cout<<"La lista esta vacia...\n";
	}else
	{
		cout<<"El valor del primer nodo es: "<<head->data<<endl;
	}
}
int contar(struct nodo *head)
{
	struct nodo *temp=NULL;
	int cantidad=0;
	
	temp=head;
	if(temp==NULL)
	{
		cout<<"La lista esta vacia\n";
	}else
	{
		while(temp!=NULL)
		{
			cantidad++;
			temp=temp->next;
		}
	}
	return (cantidad);
}
