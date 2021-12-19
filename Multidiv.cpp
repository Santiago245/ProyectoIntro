#include<stdio.h>

int Multiplicacion(int x, int y)
{
	int resultado, i;
	resultado = 0;
	for (i = 0; i < y; i++)
	{
		resultado = resultado + x;
	}
	return resultado;
}

int Division_entera(int x, int y)
{
	int resultado, i;
	if (x < y)
		resultado = 0;
	else
	{
		for (resultado = 0; x > y; resultado++)
		{
			x = x - y;
		}
	}
	return resultado;
}

float Division_decimal(int x, int y)
{
	float resultado;
	resultado = x / y;
	return resultado;
}