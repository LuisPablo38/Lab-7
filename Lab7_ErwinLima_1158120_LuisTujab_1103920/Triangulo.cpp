#include "Triangulo.h"

Triangulo::Triangulo(double base, double altura)
{
	Altura = altura; 
	Base = base; 
}

double Triangulo::CalcularArea()
{
	return (Base * Altura) /2;
}

double Triangulo::CalcularPerimetro()
{
	return (Base *3);
}
