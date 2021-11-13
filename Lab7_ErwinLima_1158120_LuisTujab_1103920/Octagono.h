#pragma once
#include "Figura.h"
class Octagono :
	public Figura
{
	double Lado; 
	double Apotema;
public: 
	Octagono(double lado, double apotema); 
	double CalcularArea();
	double CalcularPerimetro();
};

