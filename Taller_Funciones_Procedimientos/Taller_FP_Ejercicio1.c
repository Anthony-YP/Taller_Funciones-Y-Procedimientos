#include <stdio.h>
// 1. Suma de los digitos de un número //

// Definimos y realizamos la función para sumar los digitos del numero ingresado por el usuario //
int suma_digitos(int numero)
{
    int resultado;
    while (numero > 0)
    {
        resultado = resultado + numero % 10;
        numero = numero / 10;
    }

    return resultado;
}

int main()
{
    int numero, resultado;
    printf("Digite un número => ");
    scanf("%i", &numero);
    // Llamamos la funcion y la guardamos en la variables resultado //
    resultado = suma_digitos(numero);
    printf("La suma de los digitos ingresados es => %i", resultado);
}