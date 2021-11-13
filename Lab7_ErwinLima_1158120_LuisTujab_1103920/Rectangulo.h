#pragma once
#include "Figura.h"
class Rectangulo :
	public Figura
{
	double Base;
	double Altura; 
public: 
	Rectangulo(double lado, double altura); 
	double CalcularArea(); 
	double CalcularPerimetro(); 
};

