// 6. Factorial de un número //
#include <stdio.h>

int Factorial(int numero)
{
    int resultado;
    resultado = 1;
    for (int i = numero; i > 0; i--)
    {
        resultado = resultado * i;
        printf("%d", i);
        if (i != 1)
        {
            printf(" * ");
        }
        }

    return resultado;
}

int main()
{
    int numero, resultado;
    printf("Ingrese el número => ");
    scanf("%d", &numero);
    printf("%d! = ", numero);
    resultado = Factorial(numero);
    printf(" => %d", resultado);
    return 0;
}