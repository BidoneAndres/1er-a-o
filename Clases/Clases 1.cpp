#include <iostream>
#include "Veiculo.h"
using namespace std;

int main(int argc, char *argv[]) {
	Veiculo obj1;
	Veiculo obj2;
	
	obj1.setTipo("Auto");
	obj1.setCapacidad(5);
	obj1.setPatente("123");
	obj1.setColor("rojo");
	
	obj2.setTipo("Moto");
	obj2.setCapacidad(2);
	obj2.setPatente("456");
	obj2.setColor("verde");
	
	Veiculo p[2];
	
	p[0]=obj1;
	p[1]=obj2;
	
	
	return 0;
}

