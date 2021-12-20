#include <stdio.h>
#include <Multidiv.h>
#include <funciones.h>

void main ()
{
//Proyecto Final de Ingenieria en Programacion
int valor;
printf("Para una division de numeros enteros ingrese 1\n");
printf("Para una division con numeros decimales ingrese 2\n");
printf("Para una multiplicacion de numeros enteros ingrse 3\n");
printf("Para una suma ingrese 4\n");
printf("Para una resta ingrese 5\n");
printf("Para el area de un triangulo ingrese 6\n");
scanf("%i",&valo);
if (valor == 1);
{
	//Division de numeros enteros
	int Dato1,Dato2;
	int Resultado;
	printf("Ingrese el primer valor entero:");
	scanf("%i",&Dato1);
	printf("\nIngrese el siguiente valor entero:");
	scanf("%i",&Dato2);
	Resultado=Division_Entera;
	printf("\nLa division entera de %i entre %i es: %i",Dato1,Dato2;Resultado);
}
if (valor == 2);
{
	//Division de numeros decimales
        float Dato1,Dato2;
        float Resultado;
        printf("Ingrese el primer valor con decimales:");
        scanf("%f",&Dato1);
        printf("\nIngrese el siguiente valor con decimales:");
        scanf("%f",&Dato2);
        Resultado=Division_decimal;
        printf("\nLa division decimal  de %f entre %f es: %f",Dato1,Dato2;Resultado);

}
if (valor == 3);
{
	//Multiplicacion de numeros enteros
	int Dato1,Dato2;
	int Resultado;
        printf("Ingrese el primer entero valor:");
        scanf("%i",&Dato1);
        printf("\nIngrese el siguiente valor entero:");
        scanf("%i",&Dato2);
        Resultado=Multiplicacion;
        printf("\nLa multiplicacion entera de %i entre %i es: %i",Dato1,Dato2;Resultado);

}
if(valor == 4)
{
	//Suma
	float Dato1,Dato2;
	float Resultado;
        printf("Ingrese el primer valor:");
        scanf("%f",&Dato1);
        printf("\nIngrese el siguiente valor:");
        scanf("%f",&Dato2);
        Resultado=suma;
        printf("\nLa suma de %f mas %f es: %f",Dato1,Dato2;Resultado);
}
if (valor == 5)
{
	//Resta
        float Dato1,Dato2;
        float Resultado;
        printf("Ingrese el primer valor:");
        scanf("%f",&Dato1);
        printf("\nIngrese el siguiente valor:");
        scanf("%f",&Dato2);
        Resultado=resta;
        printf("\nLa resta de %f menos %f es: %f",Dato1,Dato2;Resultado);
}
if (valor == 6)
{
	//Area de un triangulo
        float Dato1,Dato2;
        float Resultado;
        printf("Ingrese el primer valor:");
        scanf("%f",&Dato1);
        printf("\nIngrese el siguiente valor:");
        scanf("%f",&Dato2);
        Resultado=triangulo;
        printf("\nLa suma de %f mas %f es: %f",Dato1,Dato2;Resultado);

}
