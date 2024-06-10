// 10. Verificar si un número es primo //

#include <stdio.h>
#include <stdbool.h>

void verificar_primo(int numero)
{
    int comprobacion = 0;
    int i = 2;           // Inicializamos la variable de control del ciclo while
    bool esprimo = true; // Inicializamos la variable esprimo como verdadero
    while (i < numero)
    {
        if (numero % i == 0)
        {
            comprobacion += 1;
        }
        i++; // Incrementamos la variable de control del ciclo
    }
    if (comprobacion > 0)
    {
        esprimo = false;
        printf("El numero %d no es primo\n", numero);
    }
    else
    {
        printf("El numero %d si es primo\n", numero);
    }
}

int main()
{
    int numero, resultado;

    printf("Ingrese un numero => ");
    scanf("%d", &numero);
    verificar_primo(numero);
    return 0;
}