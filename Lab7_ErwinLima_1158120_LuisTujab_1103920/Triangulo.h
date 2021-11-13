#pragma once
#include "Figura.h"
class Triangulo :
	public Figura
{
	double Base;
	double Altura; 
public:
	Triangulo(double lado, double altura); 
	double CalcularArea();
	double CalcularPerimetro();
};

