#include "Rectangulo.h"

Rectangulo::Rectangulo(double base, double altura)
{
	Altura = altura; 
	Base = base; 
}

double Rectangulo::CalcularArea()
{
	return Base* Altura;
}

double Rectangulo::CalcularPerimetro()
{
	return ((2* Base)+ (2* Altura));
}
