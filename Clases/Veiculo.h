#include <iostream>
using namespace std;

class Veiculo
{
private:
	string tipo;
	int capacidad;
	string patente;
	string color;
	
public:
	void setTipo(string tip);
	string getTipo();
	void setCapacidad(int capa);
	int getCapacidad();
	void setPatente(string pat);
	string getPatente();
	void setColor(string colo);
	string getColor();
};

void Veiculo::setTipo(string tip)
{
	tipo=tip;
}
string Veiculo::getTipo()
{
	return (tipo);
}
void Veiculo::setCapacidad(int capa)
{
	capacidad=capa;
}
int Veiculo::getCapacidad()
{
	return (capacidad);
}
void Veiculo::setPatente(string pat)
{
	patente=pat;
}
string Veiculo::getPatente()
{
	return (patente);
}
void Veiculo::setColor(string colo)
{
	color=colo;
}
string Veiculo::getColor()
{
	return (color);
}
string Veiculo::toString()
{
	
}
