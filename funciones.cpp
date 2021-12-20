
#include <iostream>

void leerValor(float &Dato1, float &Dato2)
{
    scanf("%f", &Dato1);
    scanf("%f", &Dato2);
}

float triangulo(float Base, float Altura)
{
    float result;
    result = Base * Altura;
    result = result/2;
    return result;
}


float suma(float Dato1, float Dato2)
{
    float result;
    result = Dato1 + Dato2;
    return result;
}

float resta(float Dato1, float Dato2)
{
    float result;
    result = Dato1 - Dato2;
    return result;
}


