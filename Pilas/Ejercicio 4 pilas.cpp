#include <iostream>
using namespace std;

struct nodo
{
	char dato;
	struct nodo *next;
};
void contarmayu(struct nodo *stp);
int contar(struct nodo *stp);
void print(struct nodo *stp);
void pop(struct nodo **stp);
void push(struct nodo **stp);
int main(int argc, char *argv[]) {
	
	char  des=' ';
	struct nodo *stp=NULL;
	int opciones=0;
	
	do
	{
		
		cout<<"Menu...\n";
		cout<<"1. Agregar un nodo a la cola.\n2. Borrar el primer nodo de la cola.\n";
		cout<<"3. Imprimir cola.\n 4. Cantidad de nodos de la cola.\n5. Cantidad de mayusculas y minusculas de la cola.\n";
		cin>>opciones;
		
		switch(opciones)
		{
		case 1:
			
			push(&stp);
			system("pause");
			system("cls");
			break;
		case 2:
			pop(&stp);
			system("pause");
			system("cls");
			break;
		case 3:
			print(stp);
			system("pause");
			system("cls");
			break;
		case 4:
			cout<<"La cantidad de nodos es de: "<<contar(stp)<<endl;
			system("pause");
			system("cls");
			break;
		case 5:
			contarmayu(stp);
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

void push(struct nodo **stp)
{
	struct nodo *new_nodo=NULL;
	char letra=' ';
	new_nodo=(struct nodo *)malloc(sizeof(struct nodo));
	new_nodo=(struct nodo *)new_nodo;
	cout<<"Ingrese la letra que desea ingresar...\n";
	cin>>letra;
	new_nodo->dato=letra;
	new_nodo->next=*(stp);
	*(stp)=new_nodo;
}
void pop(struct nodo **stp)
{
	struct nodo *temp=NULL;
	if(*stp==NULL)
	{
		cout<<"La pila esta vacia...\n";
	}else
	{
		temp=*stp;
		*stp=(*stp)->next;
		free (temp);
	}
}
void print(struct nodo *stp)
{
	struct nodo *temp=NULL;
	if(stp==NULL)
	{
		cout<<"La pila esta vacia...\n";
	}else
	{
		temp=stp;
		cout<<"Mostrando pila...\n";
		while(temp!=NULL)
		{
			cout<<temp->dato<<endl;
			temp=temp->next;
		}
	}
}
int contar(struct nodo *stp)
{
	int contador=0;
	struct nodo *temp=NULL;
	if(stp==NULL)
	{
		cout<<"La pila esta vacia...\n";
	}else
	{
		temp=stp;
		cout<<"Contando los nodos de la pila...\n";
		while(temp!=NULL)
		{
			contador++;
			temp=temp->next;
		}
	}
	return (contador);
}
void contarmayu(struct nodo *stp)
{
	struct nodo *temp=NULL;
	int contadorminu=0;
	int contadormayu=0;
	if(stp==NULL)
	{
		cout<<"La pila esta vacia...\n";
	}else
	{
		temp=stp;
		cout<<"Contando los nodos de la pila...\n";
		while(temp!=NULL)
		{
			if(temp->dato>90)
			{
				contadorminu++;
			}else
			{
				contadormayu++;
			}
			temp=temp->next;
		}
	}
	cout<<"La cantidad de letras mayusculas es de: "<<contadormayu<<" y de letras minusculas es de: "<<contadorminu<<endl;
}

