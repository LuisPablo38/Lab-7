#include "Cuadrado.h"

Cuadrado::Cuadrado(double lado)
{
	lados = lado;

}

double Cuadrado::CalcularArea()
{
	return (lados * lados);
}

double Cuadrado::CalcularPerimetro()
{
	return (lados *4);
}
