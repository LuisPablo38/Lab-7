
#include <iostream>
#include<string>
#include<cstdlib>
#include <ctime>
#include "Cuadrado.h"
#include "Figura.h"
#include "Octagono.h"

#include "Rectangulo.h"
#include "Triangulo.h"
#include <string.h>

int main()
{
	int opmen; 
    std::cout << "\t\tIngrese 1 para el problema 1" "\n ";
	std::cout << "\t\tIngrese 2 para el problema 2" "\n ";
	std::cin>> opmen; 
	switch (opmen)
	{
	case 1:
		system("cls");
		int busnum; 
		int tamarr;
		int arr[100];
		double valor; 
		char band = 'F';
		int iterator =0; 
		srand(time(0));
		std::cout << "Ingrese el tamano de numeros en el arreglo\n";
		std::cin >> tamarr; 
		for (int i= 0; i<tamarr; i++)
		{
			valor = rand(); 
			arr[i] = valor; 
			std::cout << "Numero: "<<valor<<"\n" ; 
		}
		std::cout << "Ingrese el numero de la lista que desea buscar en su posicion\n";
		std::cin >> busnum;
		while ((band=='F') && (iterator<tamarr))
		{
			if (arr[iterator] == busnum)
			{
				band = 'V';
			}
			iterator++; 
		}
		if (band == 'F')
		{
			std::cout << "El numero no existe en el arreglo \n";
		}
		else if (band == 'V')
		{
			std::cout << "El numero fue encontrado en la pos: " << iterator - 1; 
		}
		break; 
	}
	switch (opmen)
	{
	case 2:
		system("cls");
		int menfigu; 
		std::cout << "\t\t\tMenu de distintas figuras \n ";
		std::cout << "1. -- Triangulo \n ";
		std::cout << "2. -- Cuadrado \n ";
		std::cout << "3. -- Octagono \n ";
		std::cout << "4. -- Rectangulo \n ";
		std::cout << "Precione el numero de la figura que desea ingresar los datos \n ";
		std::cin >> menfigu; 
		switch (menfigu)
		{
		case 1:
			system("cls");
			int base, altura, area1, perimetro1;  
			std::cout << "Ingreso a la figura Triangulo \n ";
			std::cout << "Ingrese la base \n ";
			std::cin >> base; 
			std::cout << "Ingrese la altura \n ";
			std::cin >> altura; 
			std::cout << "Ingrese el color de la figura \n ";
			Triangulo(base, altura); 
			area1 = (base * altura) / 2; 
			perimetro1 = (base * 3);
			std::cout << "El area es  " <<area1 << " m^2 \n";
			std::cout << "El perimetro es " << perimetro1 << "\n";

			
			break;
		case 2:
			system("cls");
			int base2, altura2, area2, perimetro2;
			std::cout << "Ingreso a la figura Cuadrado \n ";
			std::cout << "Ingrese la base \n ";
			std::cin >> base2;
			std::cout << "Ingrese la altura \n ";
			std::cin >> altura2;
			area2 = (base2 * altura2);
			perimetro2 = (base2 * 4);
			std::cout << "El area es  " << area2 << " m^2 \n";
			std::cout << "El perimetro es " << perimetro2 << "\n";

			break;
		case 3:
			system("cls");
			int lado, apotema, area3, perimetro3;
			std::cout << "Ingreso a la figura Octagono \n ";
			std::cout << "Ingrese el lado \n ";
			std::cin >> lado;
			std::cout << "Ingrese el apotema \n ";
			std::cin >> apotema;
			area3 = (lado * apotema *4);
			perimetro3 = (lado *8);
			std::cout << "El area es  " << area3 << " m^2 \n";
			std::cout << "El perimetro es " << perimetro3 << "\n";
			break;
		case 4:
			system("cls");
			int base4, altura4, area4, perimetro4;
			std::cout << "Ingreso a la figura Rectangulo \n ";
			std::cout << "Ingrese la base \n ";
			std::cin >> base4;
			std::cout << "Ingrese la altura \n ";
			std::cin >> altura4;
			area4 = (base4 * altura4);
			perimetro4 = ((2 * base4) + (2 * altura4));
			std::cout << "El area es  " << area4 << " m^2 \n";
			std::cout << "El perimetro es " << perimetro4 << "\n";

			break;
		}
		break;
	}
}