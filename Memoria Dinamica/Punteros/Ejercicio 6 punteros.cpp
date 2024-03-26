#include <iostream>
using namespace std;
//Elabore un programa el cual se ingrese los partidos jugados, y calcule el porcentaje de partidos ganados y empatados...
int main(int argc, char *argv[]) {
	
	int partidos=0, ganados=0 , empatados=0;
	float promedio=0;
	int *gana=&ganados , *empa=&empatados;
	
	cout<<"Ingrese los partidos jugados...\n";
	cin>>partidos;
	cout<<"ingrese los partidos ganados...\n";
	cin>>*gana;
	cout<<"ingrese los partidos empatados...\n";
	cin>>*empa;
	
	promedio=(float)(*gana*100)/partidos;
	
	cout<<"Gano el "<<promedio<<"%"<<" de sus partidos\n";
	
	promedio=(float)(*empa*100)/partidos;
	
	cout<<"Y empato el "<<promedio<<"% de sus partidos\n";
	return 0;
}

