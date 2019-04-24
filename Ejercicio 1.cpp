// ConsoleApplication62.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
*/
int main()
{
	// variables
	int n, suma = 0;

	// datos de entrada
	cout << "Ingrese el valor de 'n' : ";
	cin >> n;

	//logica
	if (0 <= n)
	{
		for (int i = 0; i <= n; i++)
		{
			suma = suma + 2 * i;
		}
		cout << "la suma es : " << suma << endl;
	}
	else
	{
		cout << "numero incorrecto" << endl;
	}
	//datos de salida

	system("pause");
	return 0;
}
