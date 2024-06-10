// 9.Número de dígitos de un número //
#include <stdio.h>

int contador_digitos(int numero)
{
    // Iniciamos el contador //
    int contador = 0;

    // Contar el número de dígitos
    for (contador = 0; numero != 0; contador++)
    {
        numero = numero / 10;
    }
    return contador;
}
int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    numero = contador_digitos(numero);
    printf("El numero ingresado tiene %d digitos.\n", numero);
    return 0;
}