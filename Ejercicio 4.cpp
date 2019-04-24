// ConsoleApplication66.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
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
	int n, a, b = 1, suma = 0, i = 1;

	// datos de entrada
	cout << "Ingerse valor de 'n' : ";
	cin >> n;
	cout << "Ingrese valor de 'a' : ";
	cin >> a;

 	//logica
	if ((0 <= n) && (0 <= a))
	{
		while (i <= n)
		{
			suma = suma + a * b;
			b = 3 * i;

			i++;
		}
		cout << "La suma es : " << suma << endl;
	}
	else
	{
		cout << "Datos invalidos" << endl;
	}
	//datos de salida

	system("pause");
	return 0;
}
