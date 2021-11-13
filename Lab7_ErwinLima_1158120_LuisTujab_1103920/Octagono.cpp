#include "Octagono.h"

Octagono::Octagono(double lado, double apotema)
{
	Lado = lado; 
	Apotema = apotema; 


}

double Octagono::CalcularArea()
{
	return (Apotema * Lado *4);
}

double Octagono::CalcularPerimetro()
{
	return (Lado *8);
}
