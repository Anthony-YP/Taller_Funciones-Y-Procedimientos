// 7.Suma de una serie aritmética //
#include <stdio.h>

int Suma_N_Terminos(int numero)
{
    int resultado, contador, num;
    printf("Ingrese los números => ");
    contador = numero;
    while (contador > 0)
    {
        scanf(" %d", &num);
        if (contador != 1)
        {
            printf("+");
        }
        resultado = resultado + num;
        contador--;
    }

    return resultado;
}

int main()
{
    int numero, resultado;
    printf("Ingrese cuantos número desea ingresar => ");
    scanf("%d", &numero);
    resultado = Suma_N_Terminos(numero);
    printf(" => %d", resultado);
    return 0;
}