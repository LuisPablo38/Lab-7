#pragma once
#include "Figura.h"
class Cuadrado :
	public Figura
{
	double lados; 
public:
	Cuadrado(double lado);
	double CalcularArea();
	double CalcularPerimetro();
};

